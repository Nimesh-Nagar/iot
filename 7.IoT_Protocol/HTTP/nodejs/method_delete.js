const { default: axios } = require("axios");

    axios({
        method: "delete",//method get helps to get data from server
        url: 'https://sleepy-island-07017.herokuapp.com/sensors',
        headers:{Authorization:"Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MmExZTk4YmZjOGQxOTAwMTcwMGY5OGMiLCJpYXQiOjE2NTUzMDE2Mjd9.16WfbLZfVElmUhKfMBBZ1wg09dPn-Xlrer9EBOv7pzY"}
    })
    
    .then(function(response)//promises
    {
        console.log(response.data);
   })
     .catch(function(error)
   {         console.log(error);
    });
