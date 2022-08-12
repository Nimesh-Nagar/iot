const mqtt = require('mqtt')
const client = mqtt.connect("mqtt://localhost:1883", {
    protocolVersion : 5.0
})

const TOPIC = "diot"

client.on("connect", function(){
    console.log("Broker Connected")
    client.publish(TOPIC, "temp : 245.3C")
    client.end()
})
