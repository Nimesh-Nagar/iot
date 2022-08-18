// Import builtin NodeJS modules to instantiate the service
const https = require("https");
const fs = require("fs");
// Import the express module
const express = require("express");
// Instantiate an Express application
const app = express();
// Create a NodeJS HTTPS listener on port 4000 that points to the Express app
// Use a callback function to tell when the server is created.
https.createServer({
    key: fs.readFileSync("key.pem"),
    cert: fs.readFileSync("cert.pem"),
},app).listen(4000, ()=>{
    console.log('server is runing at port 4000')
});

// app.listen(4000, "127.0.0.1", function(){
// 	console.log("server is runing at port 4000")
// })

// Create an try point route for the Express app listening on port 4000.
// This code tells
// Once the request is received, it will display a message "Hello from express server."
app.get('/', (req,res)=>{
    res.send("Hello from express server.")
})