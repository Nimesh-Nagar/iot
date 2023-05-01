module.exports.insertdb = function insertdb(email , hashpw){

    var AWS = require("aws-sdk");
    let awsConfig = {
    "region": "ap-south-1",
    "endpoint":"http://dynamodb.ap-south-1.amazonaws.com",
    "accessKeyId": "AKIAUTAABERTETCD5CXP", "secretAccessKey": "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"
    };
    AWS.config.update(awsConfig);

    let docClient = new AWS.DynamoDB.DocumentClient();
 
    var input = {
        "email_id":email, "password":hashpw
    };
    var params = {
        TableName: "customer_datas",
        Item:  input
    };
    docClient.put(params, function (err, data) {

        if (err) {
            console.log("users::save::error - " + JSON.stringify(err, null, 2));                      
        } else {
            console.log("users::save::success" );                      
        }
    }); 

}

// var loginemail = req.query.lgemail

module.exports.fetchedone = function fetchedone(loginemail){
    var hashedpw
    var AWS = require("aws-sdk");
    let awsConfig = {
        "region": "ap-south-1",
        // "endpoint": "arn:aws:iam::315680171110:user/fleet_admin",
        "endpoint":"http://dynamodb.ap-south-1.amazonaws.com",
        "accessKeyId": "AKIAUTAABERTETCD5CXP", "secretAccessKey": "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"
    };
    AWS.config.update(awsConfig);

    let docClient = new AWS.DynamoDB.DocumentClient();

    var params = {
        TableName: "customer_datas",
        Key: {
            "email_id": loginemail
        }
    };

    docClient.get(params, function (err, data) {
        if (err) {
            console.log("users::fetchOneByKey::error - " + JSON.stringify(err, null, 2));
        }
        else {
            // console.log("users::fetchOneByKey::success - " + JSON.stringify(data, null, 2));
            console.log("EMAIL ID : "+data.Item.email_id)
            console.log("Hased password : "+data.Item.password)
            hashedpw = data.Item.password
        }
        
    })

return hashedpw
}