  
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include <ESPmDNS.h>

/* change it with your ssid-password */
const char* ssid = "desktop";
const char* password = "123456789";
/* this is the MDNS name of PC where you installed MQTT Server */
const char* serverHostname = "cdac-server";

const char* ca_cert = \ 
"-----BEGIN CERTIFICATE-----\n" \
"MIIDhTCCAm2gAwIBAgIUP6PaQ2yO0ituGv5ua1claK9KQeQwDQYJKoZIhvcNAQEL\n" \
"BQAwUjELMAkGA1UEBhMCSU4xCzAJBgNVBAgMAktBMRIwEAYDVQQHDAlCZW5nYWx1\n" \
"cnUxEDAOBgNVBAoMB2NkYWMgY2ExEDAOBgNVBAMMB1Jvb3QtY2EwHhcNMjQwNjE1\n" \
"MDcxMTI1WhcNMjUwNjE1MDcxMTI1WjBSMQswCQYDVQQGEwJJTjELMAkGA1UECAwC\n" \
"S0ExEjAQBgNVBAcMCUJlbmdhbHVydTEQMA4GA1UECgwHY2RhYyBjYTEQMA4GA1UE\n" \
"AwwHUm9vdC1jYTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBANeJplKH\n" \
"5jTPijEhqmRtpPVBFYGKr3ERMaxFVtomvqE3xm4x3fXjDLZvrx5AgmPnkJkI+5ho\n" \
"HKpKFHdd+eRBtnh2v3JRWxUr3tRBIBNjQOkTpDLXcHx8W4B8N6tcCRwnuNWPVVtZ\n" \
"6phCH0NeaRhB8rX+NwmsVSFS7D1kF5cfO0AItm2gOjDsGC7GYpkU7kXAjdLV7HMz\n" \
"PpfGEr8wKBYPOwEr2RzuO/bYwlQDx74rLcPKYcS7DfwKcY6MvKiQLQb0BHizu3lK\n" \
"AKtY8mF2R+Y0wmP0eUYKcHQOOMj+UqkuWnG9yWw1BaUwpgz/v+meM4hqgKUMzBDQ\n" \
"kp5gExfSSMuknFcCAwEAAaNTMFEwHQYDVR0OBBYEFIakuccu3kNMY5r1rpkH7WcK\n" \
"dBg5MB8GA1UdIwQYMBaAFIakuccu3kNMY5r1rpkH7WcKdBg5MA8GA1UdEwEB/wQF\n" \
"MAMBAf8wDQYJKoZIhvcNAQELBQADggEBAJhmLXFJq3fOwVornGklaqUUtr+AFsIw\n" \
"dm2Nklc1OlGXt8kNyGCjJj0c3kibacICix8/QJtQOvwQWF8pfOE3/JDRPt+IaGiP\n" \
"aS9Ee8v6I89ASlr+nQVuEmnkVRKc+nONcrGTRBbjTnxfppbXs3wBiwijTzVcEsiI\n" \
"14zQIvr3sBLCrC2dzBQDjEq150coNcRqfRZV8+9cF6nqdX2iti9++bilzNAg9ZE0\n" \
"+qbU8A9oNdHPquVwWYqvRfPEWuQ0wNUJHwFYfJWzQAdYsvJI/dzC+PpkoLSjMNNg\n" \
"HCFwJmX7HiqeSdn+vxMPeYt7Zu0cwd919EorS9FhNCtM3uDZvHWC9HM=\n" \
"-----END CERTIFICATE-----\n";

const char* client_ca = \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDcTCCAlmgAwIBAgIUNApqP275l5MwPWnY5zLtrZ9GTkMwDQYJKoZIhvcNAQEL\n" \
"BQAwUjELMAkGA1UEBhMCSU4xCzAJBgNVBAgMAktBMRIwEAYDVQQHDAlCZW5nYWx1\n" \
"cnUxEDAOBgNVBAoMB2NkYWMgY2ExEDAOBgNVBAMMB1Jvb3QtY2EwHhcNMjQwNzEy\n" \
"MDcwOTQzWhcNMjUwNzEyMDcwOTQzWjBPMQswCQYDVQQGEwJJTjELMAkGA1UECAwC\n" \
"S0ExDjAMBgNVBAcMBUVjaXR5MRQwEgYDVQQKDAtjZGFjX2RldmljZTENMAsGA1UE\n" \
"AwwEZWN1MTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMuObZ3y5TeV\n" \
"qjn1O8C4X8jIB3irFkML8krAGt9Ko+WXk5vfH3M1rEIKbJsA4oEhVOtIap2EZzMi\n" \
"+4u3D/4IQoeH8hZVJ79noieU5Rfobzg1CoFkHR19N0tqK9jioiJ+0LvPAwWKilc/\n" \
"SwiD6kprWTuMSUISziBE0Wv1z11LJQPwKSSebgabRPl3gEj4wPu6heZvivW/a1Ix\n" \
"/oaBudOfYAa2SNVYX7pr+7/WKP4lplaInGOhk2zTRlnQnhkM5GqQZ7OtWwMRqaQS\n" \
"e56q/T89Jf3j0BNY6riE5NFkbExMxCEzVMPSVTGKGamhU7nKUfAvyEGYrs8F66DF\n" \
"ele+8UWgSm8CAwEAAaNCMEAwHQYDVR0OBBYEFO1iroA7nLvK65MsEnZHhwWHQe1M\n" \
"MB8GA1UdIwQYMBaAFIakuccu3kNMY5r1rpkH7WcKdBg5MA0GCSqGSIb3DQEBCwUA\n" \
"A4IBAQBnQMLSryelLFOZiWQDg7ktNVC1uuSR3fpBKRwBRJi2cdKESAhnhkcM52O5\n" \
"6EOdcYkWdiqKh1Xj3/zbZFLy4BlyVszfB9JLIWBDpO0kNKyAHF4VWQSjE/FzbsC1\n" \
"zskdYwWVTwFN7CXirk9mgNNAF6SUXDlQpetyOHBFoItPzpHlwdck2cBRMoG3rwfP\n" \
"SoyyOU22n2VBdYUWTdXsiDqkY0LCX4OOriBwr44AjL+A3o7octiC/uyDlZ//FqlR\n" \
"sFpqYviQp1NbB+o13eEG4fKFesHRzsHCGOp/lwwswOTgH/r3GlyVfQ9b7cVvVAzT\n" \
"mqS+C+rcbr2OJzd8m/0dSLg6LwpS\n" \
"-----END CERTIFICATE-----\n";

const char* private_key = \
"-----BEGIN PRIVATE KEY-----\n" \
"MIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQDLjm2d8uU3lao5\n" \
"9TvAuF/IyAd4qxZDC/JKwBrfSqPll5Ob3x9zNaxCCmybAOKBIVTrSGqdhGczIvuL\n" \
"tw/+CEKHh/IWVSe/Z6InlOUX6G84NQqBZB0dfTdLaivY4qIiftC7zwMFiopXP0sI\n" \
"g+pKa1k7jElCEs4gRNFr9c9dSyUD8Ckknm4Gm0T5d4BI+MD7uoXmb4r1v2tSMf6G\n" \
"gbnTn2AGtkjVWF+6a/u/1ij+JaZWiJxjoZNs00ZZ0J4ZDORqkGezrVsDEamkEnue\n" \
"qv0/PSX949ATWOq4hOTRZGxMTMQhM1TD0lUxihmpoVO5ylHwL8hBmK7PBeugxXpX\n" \
"vvFFoEpvAgMBAAECggEAE28gthDHo5vtaaUpNEgmFPRMClBDStlsI4jdx+3HYhcr\n" \
"p5kQ1p4MOS3nmpDmDzAQfHooe6t1cuNnIrqyky1UtL3c9hbhOZv6Vk8X5EVzwOkH\n" \
"fL0DLpqS2edkEkvo8OQsp5GnFzNX6+aGEmUNzFcdaNsG74D+HwSS/fy09JJFEXAD\n" \
"zs5Ght1Ko7kKLZDMfYAATLF8dJLv5h8k7lo6lwuRLkQzuqmnoPz5Kr+cKOly97G2\n" \
"9WjZrwFlXA47qCePDBc9z1bBxXRcrERtGDa7UFeQzSugm9EoXsLVk/9TFQ8SgBXo\n" \
"LiwfTyQ5vuMITmwVj/hIi4e+g7hL0B2j4jf9eKRi8QKBgQDtDntYb7Z6jRVevvn9\n" \
"/zRLjdojYQA6ZyleQTzmmH4uudEzMsKRJ3nNVh5ZLtYOkTk7V+ftI17o93D2ofqX\n" \
"8OUX1F5fj1EAMWiwM5qB7gDotmFu8LqGzKkMewK6ijzO6eaXvChzHEglKjunTYo3\n" \
"hGcrxNWiGNaYAkhSP/MEX7UslwKBgQDb0qAQQ83wovnYRyRw+3DBlHMnQvF/BVb5\n" \
"e+xz7j7YmvGFyVCw4opVs7MxNIH2kCJ4Mrlmd3rQdRaNYw49buWeZ12qeW8n2NJo\n" \
"Vry1dA7mjVUOOZTEkF3GTRkb/xmXOs09K332aBZDap8w4mUCKB4uw14xwstPgsV+\n" \
"LqHBa+CT6QKBgEH68ufliBPKKvWJEEna+3JAFEQenpKi3gfG/q1sKkrVG141taPz\n" \
"Kdq2KpJGD/xT/WsAB6SgYK1VGdL7uKULvqgISxAr8q6sEehhJJMfbI9ZG/tl83TL\n" \
"iA3aOyMykMRCpBT9oQCREZ+OhrYFRgA30QOEsLWCVlBO6lRCSmCgRuwXAoGBANF7\n" \
"WNnnI7wsM5gtw8Z/dyaix1Ik82qutgGuXNjls7JLhdqOzHykhlvBkgRUG33SQWb2\n" \
"P8QsHDfHPSSjvxBAPEXGD3bDnnAEqg6QiekJnqGLEgEqUmE3ioXNNx587fA2MxwV\n" \
"9EX7TywT0XyOYt+5R3oc6AjXr1QoNPhYjAF9QljxAoGAMmTIIMR/BWZGxpYIk+Xb\n" \
"fLqAy0s26fYk78LxnsB+9xjDPSz2n6fxiV77qP4DTNbYt9De2aM0l0Wdf8PNyqJ2\n" \
"n5Hz5F8CgLuigF/GUt4//+YO5usR3ZiMp3Pt7NyCvhw0R1jDvHYC4RMfDxYroszI\n" \
"3bvKgxbH6XHQI1lkaJwjOf4=\n" \
"-----END PRIVATE KEY-----\n";


/* create an instance of WiFiClientSecure */
WiFiClientSecure espClient;
PubSubClient client(espClient);

/*LED GPIO pin*/
const char led = 2;

/* topics */
#define COUNTER_TOPIC    "ecu1/counter"
#define LED_TOPIC     "ecu1/led" /* 1=on, 0=off */

long lastMsg = 0;
char msg[20];
int counter = 0;

void receivedCallback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message received: ");
  Serial.println(topic);

  Serial.print("payload: ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
  /* we got '1' -> on */
  if ((char)payload[0] == '1') {
    digitalWrite(led, HIGH); 
  } else {
    /* we got '0' -> on */
    digitalWrite(led, LOW);
  }

}

void mqttconnect() {
  /* Loop until reconnected */
  while (!client.connected()) {
    Serial.print("MQTT connecting ...");
    /* client ID */
    String clientId = "ESP32Client";
    /* connect now */
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      /* subscribe topic */
      client.subscribe(LED_TOPIC);
    } else {
      Serial.print("failed,  status code = ");
      Serial.print(client.state());
      Serial.println("try again in 5 seconds");
      /* Wait 5 seconds before retrying */
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  /* set led as output to control led on-off */
  pinMode(led, OUTPUT);

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  /*setup MDNS for ESP32 */
  if (!MDNS.begin("esp32")) {
      Serial.println("Error setting up MDNS responder!");
      while(1) {
          delay(1000);
      }
  }
  /* get the IP address of server by MDNS name */
  // Serial.println("mDNS responder started");
  // IPAddress serverIp = MDNS.queryHost(serverHostname);
  // Serial.print("IP address of server: ");
  // Serial.println(serverIp.toString());

  /* set SSL/TLS certificate */
  espClient.setCACert(ca_cert);
  /* Client certificate */
  espClient.setCertificate(client_ca);
  espClient.setPrivateKey(private_key);


  /* configure the MQTT server with IPaddress and port */
  client.setServer(serverHostname, 8883);
  /* this receivedCallback function will be invoked 
  when client received subscribed topic */
  client.setCallback(receivedCallback);
  
}
void loop() {
  /* if client was disconnected then try to reconnect again */
  if (!client.connected()) {
    mqttconnect();
  }
  /* this function will listen for incomming 
  subscribed topic-process-invoke receivedCallback */
  client.loop();
  /* we increase counter every 3 secs
  we count until 3 secs reached to avoid blocking program if using delay()*/
  long now = millis();
  if (now - lastMsg > 3000) {
    lastMsg = now;
    if (counter < 100) {
      counter++;
      snprintf (msg, 20, "%d", counter);
      /* publish the message */
      client.publish(COUNTER_TOPIC, msg);
    }else {
      counter = 0;  
    }
  }
}