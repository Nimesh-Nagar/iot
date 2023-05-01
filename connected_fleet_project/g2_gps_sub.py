from paho.mqtt import client as mqtt
from pymongo import MongoClient 
import time
import os

longi = 0
lati = 0 
spd = 0

# Define Variables for rpi broker
MQTT_BROKER = os.getenv('MQTT_URL')
MQTT_PORT = os.getenv('MQTT_PORT_NO')
QOS = 1
MQTT_USER_NAME = os.getenv('USER_NAME')
MQTT_PASSWD = os.getenv('PASSWORD')

MQTT_TOPIC = [("longitude",1),("latitude",1),("speed",1)]


def on_connect(client, userdata, flags, rc):
    if rc == 0:
        print("Connected to MQTT broker")
    else:
        print("Connection failed")

# receving message according to topic
def on_message(client, userdata, message):

    if message.topic == "latitude":
        receive=message.payload.decode("utf-8")
        print(" latitude value: ",receive)
        global lati
        lati = float(receive)

    if message.topic == "longitude":
        receive=message.payload.decode("utf-8")
        print(" longitude value: ",receive)
        global longi
        longi = float(receive)

    if message.topic == "speed":
        receive=message.payload.decode("utf-8")
        print(" Speed in kmph : ",receive)
        global spd
        spd = float(receive)

# function to insert values into document
def insertToDb(collection,lati,longi,spd):
    time.sleep(3)
    time_stamp= str(int(time.time())) # epoch time format
    vehicle_name = "v01"
    doc2 = {
        "_id":time_stamp,
        "Vehical_Name": vehicle_name,
        "Latitude" : lati,
        "Longitude": longi,
        "Speed":spd  
    } 
    time.sleep(3)
    collection.insert_one(doc2)
    print("Data inserted !.. ")


client = mqtt.Client("vehicle01")
client.on_connect= on_connect                      #attach function to callback
client.on_message= on_message                      #attach function to callback
client.username_pw_set(MQTT_USER_NAME, MQTT_PASSWD)
client.connect(MQTT_BROKER,MQTT_PORT)              #connect to broker
        

client.loop_start()        #start the loop
client.subscribe(MQTT_TOPIC)

#################### MongoDB Database ###########################

while True:
    try:    
        connect = MongoClient(os.getenv('MONGODB_URL'))
        print("Connected Successfully ")
        db = connect.fleet_data
        collection = db.vehical_loc  # creating or switching to "vehical_loc" collection

        insertToDb(collection,lati,longi,spd)

    except:
        print("Could not connect to MongoDB")




