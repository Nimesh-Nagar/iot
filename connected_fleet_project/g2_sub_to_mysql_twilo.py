
import time
from paho.mqtt import client as mqttClient
import mysql.connector
from datetime import datetime
from twilio.rest import Client
import os

# Twilio
account_sid = os.getenv('SSID')  
auth_token  = os.getenv('TOKEN')  
mob_number = os.getenv('MOB_NO')
twilio_client = Client(account_sid, auth_token)

temp = 0 
esp_humi = 0
longi = 0
lati = 0 
vibra = "" 

# Define Variables for rpi broker
MQTT_BROKER = os.getenv('MQTT_URL')
MQTT_PORT = os.getenv('MQTT_PORT_NO')
QOS = 1
MQTT_USER_NAME = os.getenv('USER_NAME')
MQTT_PASSWD = os.getenv('PASSWORD')

MQTT_TOPIC = [("temperature",1),("humidity",1),("vibration",1)]

def insertToDb(mycursor,temp,esp_humi,vibra):
    # parameters to insert in tables
    time_stamp= str(int(time.time())) # epoch time format
    sensor1 = "DHT22"
    vehicle = "vehicle_01"
    
    data1 =(""" INSERT INTO Temperature(Time_stamp, Sensor_Name, Vehicle_Name, Temperature, Humidity) VALUE(%s,%s,%s,%s,%s)""")
    val1 = (time_stamp,sensor1,vehicle,temp,esp_humi)
    mycursor.execute(data1,val1)
    mydb.commit()
    print("Data from dht11  Committed.... ")

    sensor3 = "sw420"
    print("Vibration value received ",vibra)
    data3 = (""" INSERT INTO Vibration(Time_stamp, Sensor_Name, Vehicle_Name,Vibrations_value) VALUE(%s,%s,%s,%s)  """)
    val3=(time_stamp,sensor3,vehicle,vibra)
    mycursor.execute(data3,val3)
    mydb.commit()   
    print("Data from sw420 commited.... ")

def on_connect(client, userdata, flags, rc):
    if rc == 0:
        print("Connected to Remote broker")
    else:
        print("Connection failed")

def on_message(client, userdata, message):
    if message.topic == "temperature":
        receive=message.payload.decode("utf-8")
        print("Temperature: ",receive)
        global temp
        if float(receive) > 0.0:
            temp = float(receive)           
        else: 
            print("Not valid")  
            
        
        # Twilio temperature message
        if temp>=30:
            twilio_message = twilio_client.messages.create(
                to=mob_number, 
                from_="15626208951",
                body="Temperature increased")

            # print(twilio_message.sid)
            print(twilio_message.body) 
        
    if message.topic == "humidity" :
        receive=message.payload.decode("utf-8")
        print("Humidity: ",receive)
        global esp_humi

        if float(receive) > 0.0:
            esp_humi = float(receive)     
        else:
            print("Not Valid")
           
        
        # Twilio humidity message
        if esp_humi>=96:
            twilio_message = twilio_client.messages.create(
                to=mob_number, 
                from_="15626208951",
                body="Humidity increased")

            # print(twilio_message.sid)
            print(twilio_message.body)

    if message.topic == "vibration":
        receive=message.payload.decode("utf-8")  
        print("vibration: ",receive)  
        global vibra
        if receive == "0":
            print("not valid")
        else:  
            vibra= str(receive)

        # Twilio vibration message
        if vibra!="Normal Condition":
            twilio_message = twilio_client.messages.create(
                to=mob_number, 
                from_="15626208951",
                body="Vibration detected")

            # print(twilio_message.sid)
            print(twilio_message.body)  

client = mqttClient.Client("esp32")               #create new instance
client.on_connect= on_connect                      #attach function to callback
client.on_message= on_message                      #attach function to callback
client.username_pw_set(MQTT_USER_NAME, MQTT_PASSWD)
client.connect(MQTT_BROKER,MQTT_PORT)              #connect to broker         

client.loop_start()        #start the loop

client.subscribe(MQTT_TOPIC)

#################### MySQL Database #################
while True:
    mydb = mysql.connector.connect(
        host = os.getenv('MYSQL_URL'), 
        port = os.getenv('MYSQL_PORT'),
        user = os.getenv('MYSQL_UNAME'),
        password = os.getenv('MYSQL_PASSWD')
    )
    mycursor = mydb.cursor()

    try:
        mycursor.execute("USE edgeData")

        insertToDb(mycursor,temp,esp_humi,vibra)     

    except mysql.connector.DatabaseError as e:
        print(e)

    mydb.close()
    time.sleep(6)
