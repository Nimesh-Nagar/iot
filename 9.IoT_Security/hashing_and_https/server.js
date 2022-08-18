var hashemail
var hashpw
var otp

var nodemailer = require('nodemailer')
const express = require('express')
const hashes=require('jshashes')
const https = require("https")
const fs = require("fs")
const app = express()

app.get('/reg.html',function(req,res) {
    res.sendFile('/reg.html',{root : __dirname})
})

app.get('/action_page',function(req,res) {
    otp = Math.round(Math.random()*(999999-100000)+100000)

    var email = req.query.email
    var pw = req.query.psw

    let transporter = nodemailer.createTransport({
        service: 'gmail',
        port: 465,
        secure: true,
        auth: {
            user: 'hemanshudaloi@gmail.com',
            pass: 'ogsznpqwboihnjnu'
        }
    })
    var mailOptions = {
        from: 'hemanshudaloi@gmail.com',
        to: email,
        subject: otp,
        text: 'This your otp valid for 1min!'+otp
    }
    transporter.sendMail(mailOptions, function(error, info){
        if (error) {
            console.log(error);
        } else {
            console.log('Email sent: ' + info.response);
        }
    })
    
    res.sendFile("/otp_Verification.html", {root : __dirname})
    
    app.get('/otp_validate', function(req, res) {
        var userEnteredOtp = Number(req.query.otp)
        console.log("User entered otp: ", userEnteredOtp)
        console.log("Generated otp: ", otp)
        if(userEnteredOtp == otp) {
            res.sendFile("/valid_Home.html", {root : __dirname})
        }
        else {
            res.sendFile("/invalid_Home.html", {root : __dirname})
        }
    })

    hashemail = new hashes.SHA1().b64(email)
    hashpw = new hashes.SHA1().b64(pw)
    // console.log("From forgot ", hashpw)
})

app.get('/login.html',function(req,res) {
    res.sendFile('/login.html',{root : __dirname})
})

app.get('/login_page',function(req,res) {
    var email = req.query.email
    loginemail = new hashes.SHA1().b64(email)
    var pw = req.query.psw
    loginpw = new hashes.SHA1().b64(pw)
    if(loginpw == hashpw && loginemail == hashemail) {
        res.sendFile('/welcome_home.html', {root : __dirname})
    }
    else {
        res.send("<center>LOGIN FAILED</center>")
    }
})

app.get('/forgot.html', function(res, res) {
    res.sendFile('/forgot.html',{root : __dirname})
})

app.get('/forgot_page', function(req, res) {
    otp = Math.round(Math.random()*(999999-100000)+100000)

    var email = req.query.email
    var hashForgotEmail = new hashes.SHA1().b64(email)

    if(hashForgotEmail == hashemail) {
        let transporter = nodemailer.createTransport({
            service: 'gmail',
            port: 465,
            secure: true,
            auth: {
                user: 'hemanshudaloi@gmail.com',
                pass: 'ogsznpqwboihnjnu'
            }
        })
        var mailOptions = {
            from: 'hemanshudaloi@gmail.com',
            to: email,
            subject: otp,
            text: 'This your otp valid for 1min!'+otp
        }
        transporter.sendMail(mailOptions, function(error, info){
            if (error) {
              console.log(error);
            } else {
              console.log('Email sent: ' + info.response);
            }
        })
        
        res.sendFile("/otp_Verification_forgot.html", {root : __dirname})
        
        app.get('/otp_validate_forgot', function(req, res) {
            var userEnteredOtp = Number(req.query.otp)
            console.log("User entered otp: ", userEnteredOtp)
            console.log("Generated otp: ", otp)
            if(userEnteredOtp == otp) {
                res.sendFile("/newPassword.html", {root : __dirname})

                app.get('/pswd_change_forgot', function(req, res) {
                    var newPswd = req.query.pswdNew
                    var hashNewPswd = new hashes.SHA1().b64(newPswd)
                    hashpw = hashNewPswd
                    // console.log("From forgot ", hashNewPswd)
                    // console.log("From forgot ", hashpw)
                    res.sendFile('/login.html', {root : __dirname})
                })
            }
            else {
                res.sendFile("/invalid_Home.html", {root : __dirname})
            }
        })
    }
    else {
        res.send("<script>alert(\"No such email id in our database\")</script>")
    }
})

https.createServer({
    key: fs.readFileSync("key.pem"),
    cert: fs.readFileSync("cert.pem")
}, app).listen(30000, () => {
    console.log('server is runing at port 4000')
})