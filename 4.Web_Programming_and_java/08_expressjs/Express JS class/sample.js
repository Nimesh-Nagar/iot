let express = require("express") // import the express module
let app = express() // creat an express application

app.get("/",function(req,resp){
    resp.send("Hello World")
})

app.listen(3000,function(){
    console.log("App running on port 3000")
})

