
import serial
import time
from paho.mqtt import client as mqtt_client
import os


# Define Variables for rpi broker
MQTT_BROKER = os.getenv('MQTT_URL')   
MQTT_PORT = os.getenv('MQTT_PORT_NO') 
QOS = 1
MQTT_USER_NAME = os.getenv('USER_NAME') 
MQTT_PASSWD = os.getenv('PASSWORD') 
# topics
topic_lati = "latitude"
topic_longi = "longitude"
topic_speed = "speed"

latitude = 0
longitude = 0
speed = 0

def parseGPS(data):
	if data[0:6] == b"$GPRMC":
		s = data.split(b",")
		if s[7] == b'00':
			print("no satelite data available")
			return

		latitude = float(s[3].decode()) / 100
		# dirLat = s[3].decode()

		longitude = float(s[5].decode()) / 100
		# dirLon = s[5].decode()
		speed_k = float(s[7].decode())
		speed = speed_k*1.852

		print("Speed in knots %f knots "%(speed_k))

		# print("Latitude: %f(%s) -- Longitude: %s(%s)" %(lat, dirLat, lon, dirLon))
		print("Latitude: %f -- Longitude: %f -- Speed %f kmph" %(latitude, longitude, speed))

def connect_mqtt():
	def on_connect(client, userdata, flags, rc):
		if rc == 0:
			print("Connect to MQTT Broker ! ")
		else:
			print(f"Failed to connect , code: {rc}")
		
		client = mqtt_client.Client()
		client.username_pw_set(MQTT_USER_NAME, MQTT_PASSWD)
		client.on_connect = on_connect
		client.connect(MQTT_BROKER,MQTT_PORT)
		return client		

def publish(client):
	result1= client.publish(topic_lati, latitude)
	status1 = result1[0]
	if status1 == 0:
		print(f"send to topic : {topic_lati}")
	else:
		print(f"failed to send to topic {topic_lati}")

	result2= client.publish(topic_longi, longitude)
	status2 = result2[0]
	if status2 == 0:
		print(f"send to topic : {topic_longi}")
	else:
		print(f"failed to send to topic {topic_longi}")

	result3= client.publish(topic_speed, speed)
	status3= result3[0]
	if status3 == 0:
		print(f"send to topic : {topic_speed}")
	else:
		print(f"failed to send to topic {topic_speed}")	


def run():
	client = connect_mqtt()
	client.loop_start()
	publish(client)


serialTTY = serial.Serial("/dev/ttyAMA0", baudrate = 9600)
while True:
	data = serialTTY.readline()
	time.sleep(5)
	parseGPS(data)
	run()

