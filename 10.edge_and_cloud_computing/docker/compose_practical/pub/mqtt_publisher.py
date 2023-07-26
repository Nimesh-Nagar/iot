"""
first step is : check python version
The code supports python version 3
pip3 install paho-mqtt (paho mqtt client)
Ref : https://github.com/eclipse/paho.mqtt.python/blob/master/examples/publish_single.py

Test this code : by ruuning mosquitto_sub in bash shell

Problem Statement:
Publish a single message:
Take message as input : input/raw_input
topic-name: test/mqtt/message
broker : running on your hostmahine
retain : False
clientid = test123
keepalive = 60
qos = 1

"""

import paho.mqtt.publish as publish
import time
topic = "test/mqtt/message"
hostname = "mqttbroker"  #service name of MQTT broker defined in .yml file
port = 1883   #port number of MQTT broker container
qos = 1
retain = False
clientid = "test123"
keepalive = 60
payload = "Temperature is 20C"
while True:
    time.sleep(20)
    publish.single(topic, payload, qos, retain, hostname, port, clientid, keepalive)
