const mqtt = require('mqtt')
const client = mqtt.connect("mqtt://localhost 1883")
//client = mqtt.Client()

const topic = 'iotProtocols'
client.on("connect",function(){
    console.log("Broker Connected ")
 
    client.publish(topic,"Temp : 22.3 C")    
    })


