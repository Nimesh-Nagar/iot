
var logs = document.getElementById("msgLogs");
var messages = document.getElementById("messages");

connect();

var data = "";
var socket;
function connect() {
    var ws = new WebSocket("ws://localhost:8080");
    ws.onopen = function(){
        console.log("Connected to client");
        socket = ws;
    }

    ws.onmessage = function(message){
        console.log(message.data);
        data +=  message.data+ "\n";
        logs.innerHTML = data
    }
}

function send(){
    data += "Me: "+ messages.value+ "\n";
    logs.innerHTML = data
    socket.send(messages.value)
    messages.value = "";
}
