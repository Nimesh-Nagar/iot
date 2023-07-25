"""     Class Method and Static Method 
In Python, a CLASS METHOD is a special method that belongs to the class rather than an instance of the class. 
It is defined using the '@classmethod' decorator before the method definition. The first parameter of a class 
method is usually named 'cls', which represents the class itself. 
Class methods are commonly used to create "alternative constructors" or perform operations that are related to 
the class rather than specific instances.

""" 
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

    # alternative constructor we are working with class instead of variables
    @classmethod
    def set_raise_amt(cls, amount):
        cls.raise_amt = amount
    
    # pass in string & create employ for them 
    @classmethod
    def from_string(cls,new_str):
        first, last, pay = new_str.split('-')
        return cls(first, last, pay)

emp1 = Employee('Nimesh', 'Nagar', 50000)
emp2 = Employee('test', 'user', 60000)
print(emp1.raise_amt)

# raise amount using Class Method
print("------ After class-method : set-raise-amt ------")
emp1.set_raise_amt(1.10)
print(emp1.raise_amt) 
print(emp2.raise_amt)

# Problem: getting data in string and need to parse every time and create employee ...
# Sol: we will create a alternative constructor to convert string and create a employee.

print("------ Another Alternative Constructor ------\n")
emp_str1 = 'leekhil-likhu-65000'
emp_str2 = 'abhi-sahu-70000'

new_emp1 = Employee.from_string(emp_str1)
print(new_emp1.email)
print(new_emp1.pay)

