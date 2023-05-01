function fetchone(){

    var AWS = require("aws-sdk");
    let awsConfig = {
        "region": "ap-south-1",
        "endpoint":"http://dynamodb.ap-south-1.amazonaws.com",
        "accessKeyId": "AKIAUTAABERTAJVRBVJN", "secretAccessKey": "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"
    };
    AWS.config.update(awsConfig);

    let docClient = new AWS.DynamoDB.DocumentClient();

        var params = {
            TableName: "customer_data",
            Key: {
                "email_id": "example@gmail.com"
            }
        };
        docClient.get(params, function (err, data) {
            if (err) {
                console.log("users::fetchOneByKey::error - " + JSON.stringify(err, null, 2));
            }
            else {
                console.log("users::fetchOneByKey::success - " + JSON.stringify(data, null, 2));
            }
        })

}

