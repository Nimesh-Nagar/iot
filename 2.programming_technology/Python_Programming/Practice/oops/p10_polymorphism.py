# Polymorphism refers to the use of a single type entity (method, operator or object) to represent 
# different types in different scenarios.

class Employee:

    def __init__(self,first,last,pay):
        self.first = first
        self.last = last
        self.email = first + '.' + last + '@xyz.com'
        self.pay = pay
        
    def full_name(self):
        return '{} {}'.format(self.first, self.last)
    
class Developer(Employee):
    raise_amt = 1.10    #raise for dev only

    def __init__(self, first, last, pay, prog_lang):
        super().__init__(first, last, pay) 
        self.prog_lang = prog_lang 

        