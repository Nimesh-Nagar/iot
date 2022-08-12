const mqtt = require('mqtt')

topic = "jeet/sensor/data"


client = mqtt.connect("mqtt://192.168.32.273:1883", {
    username :"jeet",
    password: "jeet@123"
  //  protocolVersion : 4.0,
  //  clientId : "nimesh_22",
  //  client : "MQTT",
  //  protocolid : "nagar",
  //  keepalive : 20
})

client.on("connect", () => {
    client.subscribe(topic, (err) => {
        if(!err) {
            console.log("subscribed")
        }
    })
})

client.on("message", (topic, message) => {
    console.log(message.toString())
})
