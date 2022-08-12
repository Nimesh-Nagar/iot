const mqtt = require('mqtt')

const client = mqtt.connect("mqtt://localhost:1883") // mqtt.connect([url], options)

topic = 'esp32/test' 

client.on('connect',function(){
        console.log("Connected to Broker")
    
    client.subscribe(topic,{qos:1},function(err){
        if(!err){
            console.log(`Successful subcsribed to ${topic}`)
        }
    })
})

client.on("message",function(topic,message){
    console.log(message.toString())
    console.log(topic)
})
