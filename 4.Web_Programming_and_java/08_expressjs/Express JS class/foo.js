let express =require('express')
let app = express()

app.get("/foo", function(req, resp) {
   str = "<h1>Hello foo</h1>"
   resp.send(str)
})

app.listen(3000, function(){
    console.log("server is listening on localhost:3000")
})
