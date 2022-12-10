let express =require('express')
let app = express()

app.get("/", function(req, resp) {
   let d1 = new Date()
   let str = "<h1>Hello</h1>"
   let msg=" "
   if(d1.getHours() < 12) {
       msg = "Good Morning"
   }
   else if(d1.getHours() < 16) {
        msg = "Good Afternoon"
   }
   else if(d1.getHours() > 16) {
         msg = "Good Evening"
    }
    resp.send(msg)
})


app.listen(3000, function(){
    console.log("server is listening on localhost:3000")
})
