let express =require('express')
let app = express()

app.get("/radius", function(req, resp) {
    resp.sendFile("radius.html", {root : __dirname})
})

app.get("/calcArea", function(req,res){
    // code to extract 
    let rad = parseInt(req.query.radius) //
    let area = Math.PI * rad * rad
    res.send("Area : "+area)
})
   
app.listen(3000, function(){
    console.log("server is listening on localhost:3000")
})