const mqtt = require('mqtt')

const topic = "jeet/sensor/data"

client = mqtt.connect("mqtt://localhost:1883", {
    username :"nimesh1",
    password: "12345",
    protocolVersion : 4.0,
    clientId : "jeet",
    client : "MQTT",
    protocolid : "nagar",
    keepalive : 20
})

data1 = "hello bro";
data2 = {"Name":"leekhil"};
data3 = [10, 20, 30];
data4 = "40"
data5 = {
	mesg:"hello bro",
	time: 12.21
}

client.on("connect", function(){
    console.log("Broker connected")

    client.publish(topic, "{temp:23.23}", {qos : 0})
    client.publish(topic, data1, {qos : 2})
    client.publish(topic, JSON.stringify(data2), {qos : 1}) // This should always be a string data
    client.publish(topic, data3.toString(), {qos : 1})
    client.publish(topic, data4, {qos : 1})
  //  client.publish(topic, JSON.stringify(data5));

    //client.end()
})
