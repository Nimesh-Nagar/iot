const express = require('express')
const nodemailer = require('nodemailer')
const app = express()
const hashes = require('jshashes')
const https = require('https')
const fs = require('fs')
require('dotenv').config();

// DynamoDB Data base connection
var AWS = require("aws-sdk");
var awsConfig = {
    "region": "ap-south-1",
    "endpoint": process.env.END_POINT,     
    "accessKeyId": process.env.ACCESS_ID,  
    "secretAccessKey": process.env.SECRETE_KEY,
};
AWS.config.update(awsConfig);
var docClient = new AWS.DynamoDB.DocumentClient();

const PORT = 8029
var hashedpw
var email
var passwd

var smtpTransport = nodemailer.createTransport({
    service: "gmail",
    port: 465,
    secure: true,
    auth: {
        user: process.env.EMAIL_ID, 
        pass: process.env.PASSWORD  
    }
});

// Registration Page
app.get("/reg", (req, res) => {
    res.sendFile('reg.html', { root: __dirname })
});

// Server will send OTP on Email and perform verification process
app.get("/action_page", function (req, res) {

    email = req.query.email;
    passwd = req.query.psw;

    console.log(email)
    console.log(passwd)

    var otp, mailOption, host, link;

    otp = Math.floor((Math.random() * 1000000) + 500);
    host = req.get('host');
    link = "http://" + req.get('host') + "/verify?id=" + otp;
    mailOption = {
        from: "n.nimesh02@gmail.com",
        to: email,
        subject: "Please find OTP for email verification",
        html: "Hello Dear,<br> Your OTP for verification of email is : " + otp

    }
    console.log(mailOption);

    smtpTransport.sendMail(mailOption, function (err, info) {
        if (!err) {
            console.log("Message Sent: " + info.response);
            res.end("sent");
            console.log("OTP : " + otp)
        }
    });
    res.sendFile("/otp_verification.html", { root: __dirname })

    //otp validation process
    app.get("/otp", function (req, res) {
        var userOTP = Number(req.query.otp)
        console.log("User Entered OTP ", userOTP)
        console.log("Generated OTP ", otp)

        if (userOTP == otp) {
            //store values in data base
            hashedpw = new hashes.SHA1().b64(passwd)
            var input = {
                "email_id": email, "password": hashedpw
            };
            var params = {
                TableName: "customer_datas",
                Item: input
            };
            docClient.put(params, function (err, data) {

                if (err) {
                    res.sendFile("/invalidate_otp.html", { root: __dirname })
                    console.log("users::save::error - " + JSON.stringify(err, null, 2));
                } else {
                    console.log("users::save::success");
                }
            });

            res.sendFile("/login.html", { root: __dirname })

        }
        else {
            res.sendFile("/invalidate_otp.html", { root: __dirname })
        }
    });

});

//Login page
app.get('/login_page', function (req, res) {
    res.sendFile('/login.html', { root: __dirname })
})


// Login Verification process
app.get("/login", function (req, res) {
    var fetchedpw = ""
    var loginemail = req.query.lgemail
    var pw = req.query.lgpsw
    var loginpsw = new hashes.SHA1().b64(pw)
    console.log("login pass " + loginpsw)

    // From AWS DynamoDB
    var params = {
        TableName: "customer_datas",
        Key: {
            "email_id": loginemail
        }
    };

    docClient.get(params, function (err, data) {
        if (err) {
            console.log("users::fetchOneByKey::error - " + JSON.stringify(err, null, 2));
            res.sendFile("/failed_login.html", { root: __dirname })
            
        }
        else {
            // console.log("users::fetchOneByKey::success - " + JSON.stringify(data, null, 2));
            console.log("EMAIL ID : " + data.Item.email_id)
            fetchedpw = data.Item.password
            console.log("Hased password : " + fetchedpw)
            //verifing user
            if (loginpsw == fetchedpw) {
                res.sendFile("/home_dashboard.html", { root: __dirname })

            }
            else {
                res.sendFile("/failed_login.html", { root: __dirname })

            }
        }

    })

});

var filepath = "/home/hi/CDAC/project/connected_fleet/Group2/g2_web/certificates/"
https.createServer({

    key: fs.readFileSync(filepath + "key.pem"),
    cert: fs.readFileSync(filepath + "cert.pem")
}, app).listen(PORT, "127.0.0.1", function () {
    console.log("Server is up and Running.... at " + PORT)
});


