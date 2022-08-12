/*
1)Connect to a private mqtt broker i.e mosquitto on host machine(using its ip and port number)
2)Subscribe on to the published topic  
3)Print the msg puhlished
*/
//import mqtt module
const mqtt =  require('mqtt')
const mysql = require('mysql')

//topic published in esp code from arduino
topic1 = "esp32/temperature"
topic2 = "esp32/humidity"

//variable to store temp and humidity data published
var temp_data
var humi_data

//private broker ip and port number
const client = mqtt.connect("mqtt://localhost:1883",{
    //priavte broker id and password running on host machine
    username:"nimesh_rocks",
    password : "nimesh"
   /*  protocol : "MQTT",
    protocolid : "mqtt_sub",
    protocolversion:4,
    clientId : "sub", */
})
//subscribe to topic1
client.on("connect",function(){
    client.subscribe(topic1,function(err){
        if(!err)
        {
            console.log("subscribed topic 1 successfully")
        }
    })  
})
//print the published msg on topic1
/* client.on("message",function(topic1,temp){
    if(topic1 == "temp")
        temp_data = temp.toString()
        console.log(temp.toString())
}) */
//subscribe to topic2
client.on("connect",function(){
    client.subscribe(topic2,function(err){
        if(!err)
        {
            console.log("Subscribed to topic2 succesfully")
        }
    })
})

client.on("message",function(topic,data){
    if(topic == "esp32/temperature")
    {
        temp_data = data.toString()
        temp_data = parseFloat(temp_data)
        //console.log("in topic 2 msg")
        console.log(data.toString())
    }
    if(topic == "esp32/humidity")
    {
        humi_data = data.toString()
        humi_data = parseFloat(temp_data)

        //console.log("in topic 2 msg")
        console.log(data.toString())
        //insert to database function
    	insertToDatabase(temp_data,humi_data)
    }    
})

///////////////////////////////////////////////////
///////////////////////////////////////////////////
//MYSQL PROGRAM//

//Create connection
const connection = mysql.createConnection({
    host:"localhost",
    username: "root",
    password :"nimesh",
    multipleStatements : true
    //database: "mydb"
})

connection.connect(function(err){
    if(err) throw err;
    console.log("Database connected")
})
        // connection.query("CREATE DATABASE mydb" ,function(err,result){
        //     if(err) throw err;
        //     console.log("DB Created")

        // connection.query("USE mydb",function(err,result){
        //     if(err) throw err;
        //     console.log("DB in use")
        // })
        //create table
var data = "CREAT DATABASE mydb;\
            USE mydb;\
            CREATE TABLE mytable(timestamp VARCHAR(255),sensorname VARCHAR(255),place VARCHAR(255),temperature INT(255),humidity INT(255))"
// connection.query(table,function(err,result,fields){
//     if (err) throw err;
//     console.log("Table created")
// })

function insertToDatabase(temp_data,humi_data){
    epochTime = (Math.round(Date.now()/1000)).toString()
    data += "INSERT INTO mytable (timestamp,sensorname,place,temperature,humidity) VALUES ?"
    var values = [[epochTime,'dht22','pune',temp_data,humi_data]]
    connection.query(data,[values],function(err,result){
        if(err) throw err;
        console.log("Record inserted")
    })
}
