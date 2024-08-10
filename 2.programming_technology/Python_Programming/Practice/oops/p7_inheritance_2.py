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


# Child-class. It inheritent all attributes and methods from parent-class "Employee"  
class Developer(Employee):
    raise_amt = 1.10    #raise for dev only

    def __init__(self, first, last, pay, prog_lang):
        super().__init__(first, last, pay) 
        self.prog_lang = prog_lang 

# child-class 
class Manager(Employee):
    def __init__(self, first, last, pay, employees=None):
        super().__init__(first, last, pay)
        if employees is None:
            self.employees = []
        else:
            self.employees = employees

    def add_emp(self, emp):
        if emp not in self.employees:
            self.employees.append(emp)

    def remove_emp(self, emp):
        if emp in self.employees:
            self.employees.remove(emp)

    def print_emps(self):
        for emp in self.employees:
            print("-----> ",emp.full_name())


dev1 = Developer('nimesh', 'nagar', 60000, 'Python')
dev2 = Developer('abhi' ,'sahu', 50000, 'C++')

mgr1 = Manager('sturd','broad','90000',[dev1])

print(mgr1.email)

mgr1.add_emp(dev2) 
mgr1.print_emps()

print("Removing Employee")
mgr1.remove_emp(dev2) 
mgr1.print_emps()

# isinstance() tells us an object is an instance of a class
print(isinstance(mgr1 , Manager)) # checks mgr1 is instance of Manager class. "TRUE"
print(isinstance(mgr1, Employee)) # TRUE
print(isinstance(mgr1, Developer)) # FALSE

# issubclass() tells us if class is a subclass of another 
print("-----------------------------")
print(issubclass(Developer, Employee))  # TRUE
print(issubclass(Manager, Employee))    # TRUE
print(issubclass(Manager, Developer))   # FALSE

