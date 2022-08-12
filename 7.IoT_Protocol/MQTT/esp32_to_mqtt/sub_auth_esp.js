const mqtt = require('mqtt')

topic = "esp32/test"

client = mqtt.connect("mqtt://localhost:1883", {
    username :"nimesh_rocks",
    password: "nimesh"
})

client.on("connect", () => {
    client.subscribe(topic, (err) => {
        if(!err) {
            console.log(`Subscribed to topic ${topic}`)
        }
    })
})

client.on("message", (topic, message) => {
    console.log(message.toString())
})
