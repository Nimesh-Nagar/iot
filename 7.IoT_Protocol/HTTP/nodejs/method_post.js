const axios =  require('axios');

var random_num = Math.random(190-60)+60

axios({
    method: "post",
    url :"https://api.thingspeak.com/update" ,
    data : {
        "api_key":"VIK5XGE4D5VZFQRB",
     // "field3":"56.2",
        "field3": random_num
    }
})

.then(function(response){
    console.log(response.status);
    console.log(random_num);
})
.catch(function(error){
    console.log(error);
})
