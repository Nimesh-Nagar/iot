var customers = {
				customer1: {
					firstname: "Jack",
					lastname: "Davis",
					age: 25,
					id: 1
				},
				customer2: {
					firstname: "Mary",
					lastname: "Taylor",
					age: 37,
					id: 2
				},
				customer3: {
					firstname: "Peter",
					lastname: "Thomas",
					age: 17,
					id: 3
				},
				customer4: {
					firstname: "Peter",
					lastname: "Thomas",
					age: 17,
					id: 4
				}
			}
 
exports.create = function(req, res) {
	var newCustomer = req.body;
    customers["customer" + newCustomer.id] = newCustomer;
	console.log("--->After Post, customers:\n" + JSON.stringify(customers, null, 4));
    res.end("Post Successfully: \n" + JSON.stringify(newCustomer, null, 4));
};
 
exports.findAll = function(req, res) {
    console.log("--->Find All: \n" + JSON.stringify(customers, null, 4));
    res.end("All Customers: \n" + JSON.stringify(customers, null, 4));  
};
 
exports.findOne = function(req, res) {
    var customer = customers["customer" + req.params.id];
    console.log("--->Find customer: \n" + JSON.stringify(customer, null, 4));
    res.end( "Find a Customer:\n" + JSON.stringify(customer, null, 4));
};
 
exports.update = function(req, res) {
	var id = parseInt(req.params.id);
	var updatedCustomer = req.body; 
	if(customers["customer" + id] != null){
		// update data
		customers["customer" + id] = updatedCustomer;
 
		console.log("--->Update Successfully, customers: \n" + JSON.stringify(customers, null, 4))
		
		// return
		res.end("Update Successfully! \n" + JSON.stringify(updatedCustomer, null, 4));
	}else{
		res.end("Don't Exist Customer:\n:" + JSON.stringify(updatedCustomer, null, 4));
	}
};
 
exports.delete = function(req, res) {
	var deleteCustomer = customers["customer" + req.params.id];
    delete customers["customer" + req.params.id];
    console.log("--->After deletion, customer list:\n" + JSON.stringify(customers, null, 4) );
    res.end( "Deleted customer: \n" + JSON.stringify(deleteCustomer, null, 4));
};
