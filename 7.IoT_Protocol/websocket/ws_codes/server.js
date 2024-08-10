/*--------------------------------------
 * Demo program for Websockets
 * Date: 14/06/22
 * Batch: DIoT
 * Description: This program maintains two socket currently; you can add support for more sockets; Two clients instances can together chat using UI
 *-------------------------------------*/
const http = require('http');
const {WebSocketServer} = require('ws');

const server = http.createServer();

const wsClient = new WebSocketServer({server});

var client1, client2;
wsClient.on("connection",function connection(client){
    if(!client1) {
        client1 = client;
    } else {
        client2 = client;
    
    client1.on("message", function message(data){
        console.log(data.toString());    
        client2.send("User1: "+ data.toString())  
    });    

    client2.on("message", function message(data){
        console.log(data.toString());    
        client1.send("User2: "+ data.toString())  
    });
}
});

server.listen(8080);
