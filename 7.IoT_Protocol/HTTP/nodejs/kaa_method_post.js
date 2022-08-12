const axios =  require('axios');

//var random_num = Math.random(40-10)+10

axios({
    method: "post",
    url :"httpshttps://connect.cloud.kaaiot.com:443/kp1/calucj0n7nk35lgidusg-v1/dcx/hr8px2CQiS/json" ,
    data : {
      //  "api_key":"VIK5XGE4D5VZFQRB",
     // "field3":"56.2",
        "temp": 35.5
    }
})

.then(function(response){
    console.log(response.status);
    console.log(random_num);
})
.catch(function(error){
    console.log(error);
})
