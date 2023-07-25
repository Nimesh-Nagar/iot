"""
Inheritance allows us to derive or inherit attributes & methods from parent-class.
usefull as we can create subclasses & use all the functionality of our parent-class 
and we can overwrite or add new functionallity in it without affecting parent-class. 
"""

# use case more specific in emp category. we want to create developers and managers.

#parent-class
class Employee:

    raise_amt = 1.05

    def __init__(self,first,last,pay):
        self.first = first
        self.last = last
        self.email = first + '.' + last + '@xyz.com'
        self.pay = pay
        

    def full_name(self):
        return '{} {}'.format(self.first, self.last)
    
    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amt)


# Child-class "Developer" inherit all attributes and methods from parent-class "Employee"  
class Developer(Employee):
    raise_amt = 1.10    #raise for dev only

    def __init__(self, first, last, pay, prog_lang):
        super().__init__(first, last, pay) 
        self.prog_lang = prog_lang 


dev1 = Developer('nimesh', 'nagar', 60000, 'Python')
dev2 = Developer('abhi' ,'sahu', 50000, 'C++')

# """ print(help(Developer)) 
print(dev1.email)
print(dev1.prog_lang)

# # raise pay for devloper only 
# print(dev1.pay)
# dev1.apply_raise()
# print(dev1.pay)

