# class variable are variables that are shared among all instances of Class.
# Instance variable will be unique for each Instance like names and email etc. Class variable should be same for each instance 

class Employee:

    num_of_emp = 0              # class variables 
    raise_amount = 1.05         
    
    def __init__(self,first,last,pay):
        self.first = first                 
        self.last = last 
        self.pay = pay
        self.email = first + '.' + last + '@xyz.com ' 

        Employee.num_of_emp += 1

    # method to perform some actions
    def full_name(self):
        return '{} {}'.format(self.first, self.last)
    
    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)

print(Employee.num_of_emp)

emp1 = Employee('nimesh', 'nagar', 50000) # it will call __init__ method 
emp2 = Employee('test', 'user', 60000)

# print(emp1.pay)
# emp1.apply_raise()
# print(emp1.pay)

# emp1.raise_amount = 1.10
# print(emp1.__dict__)
# print(Employee.raise_amount)
# print(emp1.raise_amount)
# print(emp2.raise_amount)

print(Employee.num_of_emp)

