db.getCollection("customer").aggregate(
[
    {
        $group : 
        { _id: {gender: "$gender" }, "count_of_people": {$sum:NumberInt(1)} }
    },
    
    {
        $project:{
                gender:"$_id.gender",
                "_id":0.0,
                "count_against_genders":1.0

            }
    }
    
 ]);





