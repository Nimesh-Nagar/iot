let express = require('express')
let app = express()

app.get("/calculatorSI", function(req, res){
	res.sendFile("simple.html", {root:__dirname})
})

app.get("/simpleInterest", function(req, res) {
	let str = "<h3>Simple Interest Calculator</h3><br>"
	let principal = parseInt(req.query.principal)
	let tenure = parseInt(req.query.tenure)
	let roi = parseFloat(req.query.roi)
	let sit = principal * roi * tenure /  100
	str += "<p>Principal: " + principal +"<br>Number of Years: " + tenure + "<br>Rate of Interest: " + roi + "<br>"
	str += "=====================================<br>Simple Interest: "+ sit +"</p>"
	res.send(200, str, false)
})

app.listen(3000, "127.0.0.1", function(){
	console.log("Running........")
})