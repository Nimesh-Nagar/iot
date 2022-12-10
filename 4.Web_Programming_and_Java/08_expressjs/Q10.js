let express = require('express')
let app = express()

app.get("/parametersPage", function(req, res){
	res.sendFile("parameters.html", {root:__dirname})
})

app.get("/unordered", function(req, res) {
	let str = "The parameters are <br>"
	let first = req.query.first
	let second = req.query.second
	let third = req.query.third
	str += "<ul><li>" + first + "</li><li>" + second + "</li><li>" + third + "</li></ul>"
	res.send(200, str)
})

app.listen(3000, "127.0.0.1", function(){
	console.log("Running........")
})