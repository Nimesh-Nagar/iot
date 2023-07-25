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

   # setter decoretor to update the existing attribute. Method name sould be same
    @full_name.setter
    def full_name(self, name):
        first, last = name.split(' ')
        self.first = first
        self.last = last

    @full_name.deleter
    def full_name(self):
        print("Name Deleted !")
        self.first = None
        self.last = None


emp1 = Employee('John', 'Smith')
print(emp1.first)

print("after using setter")
emp1.full_name = 'Nimesh Nagar' #using setter to update
print(emp1.first)
print(emp1.email)       # defined as method in class, but can access it like an attriute
print(emp1.full_name)

del emp1.full_name



