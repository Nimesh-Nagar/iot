#Property Decoretor- Getter, Setter and Deleter . 

class Employee:

    def __init__(self, first, last):
        self.first = first
        self.last = last

    @property  
    def email(self):
        return '{}.{}@compay.com'.format(self.first, self.last)

    @property
    def full_name(self):
        return '{} {}'.format(self.first, self.last)
    
emp1 = Employee('John', 'Smith')

emp1.first = "Jim" # without property Decorator email will not change

print(emp1.first)
print(emp1.email)       # defined as method in class, but can access it like an attriute
print(emp1.full_name)

