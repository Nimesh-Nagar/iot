//const http = require('http')
const axois = require('axios')

/* axois({
    method:'post',
    url:'https://sleepy-island-07017.herokuapp.com/sensor',
    data:{
        "API_KEY":"j18jtXQXS1jQXte",
        "value":15
    },
    headers:{"Authorization":"Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MmExZTk4YmZjOGQxOTAwMTcwMGY5OGMiLCJpYXQiOjE2NTUzMDE2Mjd9.16WfbLZfVElmUhKfMBBZ1wg09dPn-Xlrer9EBOv7pzY"}

}) */

/* axois({
    method:'get',
    url:'https://sleepy-island-07017.herokuapp.com/sensor',
    headers:{"Authorization":"Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MmExZTk4YmZjOGQxOTAwMTcwMGY5OGMiLCJpYXQiOjE2NTUzMDE2Mjd9.16WfbLZfVElmUhKfMBBZ1wg09dPn-Xlrer9EBOv7pzY"}

}) */
 axois({
    method:'post',
    url:'https://sleepy-island-07017.herokuapp.com/sensor',
    data:{
        "API_KEY":"j18jtXQXS1jQXte",
        "value":16
    },
    headers:{"Authorization":"Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MmExZTk4YmZjOGQxOTAwMTcwMGY5OGMiLCJpYXQiOjE2NTUzMDE2Mjd9.16WfbLZfVElmUhKfMBBZ1wg09dPn-Xlrer9EBOv7pzY"}

}) 
.then(function(response){
    console.log(response.status)
    //console.log(response.data)
})
.catch(function(err){
    console.log(err.code)
})