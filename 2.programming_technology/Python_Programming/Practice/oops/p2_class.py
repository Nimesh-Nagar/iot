
class Employee:
    
    # special init (initialise or constructor) method to create instance variable automatically 
    # Now when we create method with in a class they receive the 'instance' as first argument automatically. 
    # By convention you call it 'self'. you can call it monkey donkey whatever you want.
        # after self we can pass arguments we want 
    def __init__(self,first,last,pay):
        self.first = first                 #(self==emp1) emp1.first = 'Nimesh'
        self.last = last 
        self.pay = pay
        self.email = first + '.' + last + '@xyz.com ' 

    # method to perform some actions
    def full_name(self):
        return '{} {}'.format(self.first, self.last)

emp1 = Employee('nimesh', 'nagar', 50000) # it will call __init__ method 
emp2 = Employee('test', 'user', 60000)


# print(emp1.email)
# print(emp2.email)

print(emp1.full_name()) #nimesh nagar
print(emp2.full_name()) #test user
print(Employee.full_name(emp1)) #nimesh nagar

