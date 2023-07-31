module.exports = function(app) {
 
    var customers = require('../controllers/customer.controller.js');
 
    // Create a new Customer
    app.post('/api/customers', customers.create);
 
    // Retrieve all Customer
    app.get('/api/customers', customers.findAll);
 
    // Retrieve a single Customer by Id
    app.get('/api/customers/:id', customers.findOne);
 
    // Update a Customer with Id
    app.put('/api/customers/:id', customers.update);
 
    // Delete a Customer with Id
    app.delete('/api/customers/:id', customers.delete);
}
