const mqtt = require('mqtt')
const client = mqtt.connect("mqtt://localhost:1883", {
    protocolVersion : 4,
    protocolId : 'MQTT',
    clean : true,
    clientId : 'diot_device_1',
    will :{
        topic : 'device/die',
        payload : Buffer.from("I'm dead bro")
    },
    keepAlive : 0
})

const TOPIC = "diot"
client.on("connect", function(){
    client.subscribe(TOPIC, function(err){
        if(!err) {
            console.log("Success")
        }
    })
})

client.on("message", function(topic, message){
    console.log(message.toString())
    //client.end()
})
