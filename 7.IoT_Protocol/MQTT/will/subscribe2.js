const mqtt = require('mqtt')
const client = mqtt.connect("mqtt://localhost:1883")

const TOPIC = 'device/die'

client.on("connect", function(){
    client.subscribe(TOPIC, function(err, ){
        if(!err) {
            console.log("success")
        }
    })
})

client.on("message", function(topic, message){
    console.log(message.toString())
    
})



