
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


emp1 = Employee('nimesh', 'nagar', 50000) # it will call __init__ method 
emp2 = Employee('test', 'user', 60000)

# print(emp1) # <__main__.Employee object at 0x7fd144b3cd60> 
# print(emp2) # <__main__.Employee object at 0x7fd144b95880> 

""" both objects are unique and are located at different address in memory"""

# Instance Variables 
# it contain data that are unique to each instance. we have created manully 
""" 
emp1.first = 'Nimesh'
emp1.last = 'Nagar'
emp1.email = "nimesh.nagar@xyz.com"
emp1.pay = 50000

emp2.first = 'test'
emp2.last = 'user'
emp2.email = "test.user@xyz.com"
emp2.pay = 60000
"""
print(emp1.email)
print(emp2.email)

