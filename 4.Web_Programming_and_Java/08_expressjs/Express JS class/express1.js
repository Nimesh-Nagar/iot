let express =require('express')
let app = express()

app.get("/", function(req, resp) {
  // resp.send("<h1>Hello World</h1>")  // this is static content

   let d1 = new Date()
   let str = "<h1>Hello World</h1>"
   str += "Today is "+d1.toString()
   resp.send(str)

})

app.listen(3000, function(){
    console.log("server is listening on localhost:3000")
})

