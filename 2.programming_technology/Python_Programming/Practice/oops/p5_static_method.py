""" Static Method
STATIC METHOD doesn't pass any default parameter like 'self' and 'cls' as in regular and class method respectively. 
It behaves like regular function, but have some logical connections with class. 
use '@staticmethod' as decorator to start and nothing as first argument.
use staticmethod where you don't access the instance or class anywhere within function
"""
# Take in date and return whether it is working day or not 

class Employee:

    num_of_emps = 0
    raise_amt = 1.05

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.email = first + '.' + last + '@email.com'
        self.pay = pay

        Employee.num_of_emps += 1

    def fullname(self):
        return '{} {}'.format(self.first, self.last)

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amt)

    # alternative constructor
    @classmethod
    def set_raise_amt(cls, amount):
        cls.raise_amt = amount
    
    @classmethod
    def from_string(cls,new_str):
        first, last, pay = new_str.split('-')
        return cls(first, last, pay)
    
    @staticmethod
    def is_workday(day):
        if day.weekday() == 5 or day.weekday() == 6:
            return False
        return True

emp1 = Employee('Nimesh', 'Nagar', 50000)
emp2 = Employee('test', 'user', 60000)

import datetime 
my_date = datetime.date(2023,7,22)

print(Employee.is_workday(my_date))
