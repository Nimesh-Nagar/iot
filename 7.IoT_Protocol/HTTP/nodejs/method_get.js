const axios =  require('axios').default;

// axios.get("https://api.thingspeak.com/channels/1758455/feeds.json?api_key=4FYMXRF9VVLNY1Z2&results=2")
//     .then(function (response){
//         console.log("Status code " +response.status);
//         console.log("Status in text "+response.statusText);
//       //  console.log("Headers "+response.data);
//     })

//     .then(function (response) {
//         //console.log(response.data);
//         console,log(response.JSON.parse(data))
//      // always executed
//       })
//     .catch(function (error) {
//            console.log(error);
//     });  




    axios({
        method : "get",
        url : "https://api.thingspeak.com/channels/1758455/feeds.json?api_key=VIK5XGE4D5VZFQRB&results=2",
    })
    .then(function(response){
        console.log(response.data);
    })
    .catch(function(error){
        console.log(error.response);
    })