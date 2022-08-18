const express = require('express');
const dotenv = require('dotenv');
const jwt = require('jsonwebtoken');

const app = express();

// Set up Global configuration access
dotenv.config();

let PORT = process.env.PORT || 5000;
app.listen(PORT, () => {
console.log(`Server is up and running on ${PORT} ...`);
});

data = {}

app.get("/reg" , (req,res)=>{
    console.log(req.query)
    data[req.query.un] = req.query
    res.send(data)
})

app.get("/login",)
// validate un and pw.
// generate a token for his pen type
// return token

app.get("/orderPen" , (req,res)=>{

    if(!data[req.query.un]){
        console.log("Unknown user")
    }
    else{
        if(data[req.query.un].type == "A"){
            console.log("pen ordered")
        }
        else{
            console.log("Unauthorized access")
        }
    }
    res.send("None")
})


// Main Code Here //
// Generating JWT
app.post("/generateToken", (req, res) => {
	// Validate User Here
	// Then generate JWT Token

	let jwtSecretKey = "testkey";//process.env.JWT_SECRET_KEY;
	let data = {
		time: Date(),
		userId: 12,
	}

	const token = jwt.sign(data, jwtSecretKey);

	res.send(token);
});

// Verification of JWT
app.get("/validateToken", (req, res) => {
	// Tokens are generally passed in header of request
	// Due to security reasons.

	let tokenHeaderKey = process.env.TOKEN_HEADER_KEY;
	let jwtSecretKey = process.env.JWT_SECRET_KEY;

	try {
		const token = req.header(tokenHeaderKey);

		const verified = jwt.verify(token, jwtSecretKey);
		if(verified){
			return res.send("Successfully Verified");
		}else{
			// Access Denied
			return res.status(401).send(error);
		}
	} catch (error) {
		// Access Denied
		return res.status(401).send(error);
	}
});
