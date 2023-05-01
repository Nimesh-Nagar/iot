#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>
#include <SoftwareSerial.h>


//Pins define
#define DHTPIN 4  // for dht22
#define DHTTYPE DHT22 
#define LED 2
#define VS 27 // vibration sensor input

//Objects
WiFiClient espClient;
PubSubClient client(espClient);
DHT dht(DHTPIN, DHTTYPE);

// WiFi
const char *ssid = "MOB_015"; // Enter your WiFi name
const char *password = "123456789";  // Enter WiFi password

// MQTT Broker Configuration
const char *mqtt_broker = "192.168.195.163";//rpi
const char *topic_temp = "temperature";
const char *topic_humi = "humidity";
const char *topic_vs = "vibration";

const char *mqtt_username = "nimesh_rocks";
const char *mqtt_password = "nimesh";
const int qos = 1;
const int mqtt_port = 1883;

void setup() {
  Serial.begin(9600);
// Sensors initilization 
  dht.begin();
  pinMode(LED, OUTPUT);
  pinMode(VS, INPUT);

 WiFi.begin(ssid,password);
 while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.println("Connecting to WiFi.....");
  } 
 Serial.println("Connected to the WiFi network ");
//connecting to a mqtt broker
 client.setServer(mqtt_broker, mqtt_port); 
 
}

void reconnect() 
{
    // Loop until we're reconnected
    while (!client.connected()) {
        Serial.print("Attempting MQTT connection...");
        if (client.connect("ESP32_PUB",mqtt_username, mqtt_password)) {
            Serial.println("connected");
        } 
        else {
            Serial.print("failed, rc=");
            Serial.print(client.state());
            Serial.println(" try again in 5 seconds");
            delay(5000);
        }
    }
}


void loop() 
{
  if (!client.connected()) {
      reconnect();
  }
  client.loop();
  
  // Vibration Sensor
  int measurement = pulseIn(VS, HIGH);  //wait for the pin to get HIGH and returns measurement
  delay(100);
    
  if(measurement > 500){
    digitalWrite(LED, HIGH);
    Serial.println("----------------------Viration Detected------------------------");
    client.publish(topic_vs,"Abnormal Condition",qos);   
  }
  else{
    digitalWrite(LED, LOW);
    Serial.println("------------------------Normal Condition------------------------");
    client.publish(topic_vs,"Normal Condition",qos);
  }

  //Reading Temp and Humi from DHT22 Sensors
  float val_temp = dht.readTemperature();
  float val_humi = dht.readHumidity(); 

  Serial.print("Temperatue : ");
  Serial.println(String(val_temp).c_str());
  client.publish(topic_temp, String(val_temp).c_str(), qos);
  Serial.print("Humidity : ");
  Serial.println(String(val_humi).c_str());
  client.publish(topic_humi, String(val_humi).c_str(), qos);

  delay(5000);
}
