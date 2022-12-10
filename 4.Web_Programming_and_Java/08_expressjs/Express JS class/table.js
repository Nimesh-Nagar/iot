let express =require('express')
let app = express()

let dog = [
    {id:1,name:"German Shephard", age:2},
    {id:2,name:"St. Bernard", age:3},
    {id:3,name:"Rottwiler", age:4} 
]

app.get("/dogs", function(req, resp) {
    str = "<table border='1'>"
    for(i=0;i<dog.length;i++)
    {
       var dogs=dog[i]
       str += "<tr><td>"+dogs.id+"</td><td>"+dogs.name+"</td><td>"+dogs.age+"</td></tr>"
    }
    resp.send(str)
})

 
   
app.listen(3000, function(){
    console.log("server is listening on localhost:3000")
})
