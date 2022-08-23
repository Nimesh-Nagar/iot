#sudo pip3 install Adafruit_DHT
"""
Connection 
VCC - 3.3 volt (+)
GND - GND
Data PIN - GPIO4 (BCM)
"""

import Adafruit_DHT

DHT_SENSOR = Adafruit_DHT.DHT22
DHT_PIN = 4
print("Connect your Sensor data pin with GPIO4 (BCM) to read the data")
while True:
    humidity, temperature = Adafruit_DHT.read_retry(DHT_SENSOR, DHT_PIN)

    if humidity is not None and temperature is not None:
        print("Temp={0:0.1f}*C  Humidity={1:0.1f}%".format(temperature, humidity))
    else:
        print("Failed to retrieve data from humidity sensor")
