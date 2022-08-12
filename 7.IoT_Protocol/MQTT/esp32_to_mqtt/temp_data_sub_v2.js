const mqtt = require('mqtt');
const mysql  = require('mysql');

topic_temp = "esp32/temperature"
topic_humi = "esp32/humidity"
var temp
var humi


client = mqtt.connect("mqtt://localhost:1883", {
    username :"nimesh_rocks",
    password: "nimesh"
})
// On connect subscribe To Topic
client.on("connect", () => {
    client.subscribe(topic_temp, (err) => {
        if(!err) {
            console.log(`Subscribed to topic ${topic_temp}`)
        }
    })
    client.subscribe(topic_humi, (err) => {
        if(!err){
            console.log(`Subscribed to topic ${topic_humi}`)
        }
    })
})

// Data from ESP32
client.on("message", (topic, message) => {
    if (topic == "esp32/temperature" ){
        console.log("Temperature is : "+message.toString()+" *C")  
        temp = parseFloat(message)  
    } 
    if (topic == "esp32/humidity" ){
        console.log("Humidity is : "+message.toString()+" %")   
       humi = parseFloat(message) 
    } 
    // insert to db fun
    insertToDb(temp,humi)

})

///// MYSQL DATABASE /////

//connect to mysql database
var con  =  mysql.createConnection({
    host: "localhost",
    user:"root",
    password: "nimesh"
    //database : "nodejs_iotData"
})

//connect fucntion
con.connect(function(err){
    if (err) throw err;
    console.log("Connected ... ");
})

//Create Database 
con.query("CREATE DATABASE esp32_data",function(err,result){
    if (err) throw err;
    console.log("DATABASE Created") 
})

con.query("USE esp32_data",function(err,result){
    if (err) throw err;
    console.log("DB Used")
})

//Create table
var table = "CREATE TABLE dht_table(Timestamp VARCHAR(255),Sensor_Name VARCHAR(255),Place VARCHAR(255),Temperature INT(255), Humidity INT(255))"

con.query(table,function(err,result,fields){
    if (err) throw err;
    console.log("Table created")
})

function insertToDb(temp,humi){
    var t_stamp = (Math.round(Date.now()/1000)).toString()  // epoch time 
    var s_name = "DHT22"
    var place="CDAC_ACTS"
    var data = "INSERT INTO dht_table (Timestamp, Sensor_Name, Place, Temperature, Humidity) VALUES ?"
    var values =[[t_stamp,s_name,place,temp,humi]]
    con.query(data,[values],function(err,result){
        if(err) throw err;
        console.log("Record Inserted")
    })
}



// var data = "INSERT INTO dht_table VALUES("+t_stamp+", "+s_name+", "+place+", "+temp+", "+humi+")"

// con.query(data,function(err,result){
//     if(err) throw err;
//     console.log("Inserted -------")

// })
