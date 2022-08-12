const mqtt = require('mqtt')

topic = "iot_protocol/temp/sensor"

client = mqtt.connect("mqtt://localhost:1883", {
    username :"nimesh",
    password: "nagar",
    protocolVersion : 4.0,
    clientId : "nimesh_22",
    client : "MQTT",
    protocolid : "nagar",
    keepalive : 20
})

client.on("connect", () => {
    client.subscribe(topic, (err) => {
        if(!err) {
            console.log("subscribed")
             client.publish(topic, "humi:43.23", {qos : 0})
        }
    })
})

client.on("message", (topic, message) => {
    console.log(message.toString())
})
