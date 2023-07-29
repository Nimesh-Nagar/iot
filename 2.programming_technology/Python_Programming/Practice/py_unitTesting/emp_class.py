
class Employee:

    raise_amt = 5000

    def __init__(self, first, last, salary):
        self.first = first
        self.last = last
        self.salary = salary

    def show_name(self):
        full_name = f'{self.first} {self.last}'
        return (f"Emp_Name : {full_name.title()}")

    def get_raise(self):
        self.salary = self.salary + self.raise_amt
        return (f"Salary : {self.salary}")

obj = Employee('Nimesh','Nagar',65000)
print(obj.get_raise())
