let express =require('express')
let app = express()

app.get("/hello", function(req, resp) {
 resp.send("<h1>Hello World</h1>")  
})

app.get("/someobject", function(req, resp) {
    let obj = {name:"Adarsh",age:23,prn:12345}
    resp.send(obj)  // send respponse as pure JSON
   })

app.get("/somearray", function(req, resp) {
    let arr = ["nim","abhi","sha","nan"]
    resp.send(arr)  
   })  
   
app.listen(3000, function(){
    console.log("server is listening on localhost:3000")
})
