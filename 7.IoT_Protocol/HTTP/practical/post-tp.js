//npm install request
var request = require('request');

//api - key : Write Key from Thingspeak
//var temp = gettempdata();
//filed1 = temp 
var data = '{"api_key" : "ZFDHII5XJFDQIU3K", "field1": 38}'
var json_obj = JSON.parse(data);
request.post(
{
    headers: {'content-type': 'application/json'},
    url: 'https://api.thingspeak.com/update.json',
    form: json_obj
}, function(error, response, body)
{
  console.log(body)
  let json = JSON.parse(body);
  console.log(json);
});
