"""
"Class METHOD" 


"""

class Person:
    number_of_people = 0 # class Attribute 
    
    def __init__(self,name):
        self.name = name
        Person.add_people()
        
    @classmethod
    def number_of_people_(cls):
        return cls.number_of_people
    
    @classmethod
    def add_people(cls):
        cls.number_of_people += 1 
        
        
# Person.number_of_people = 4
p1 = Person("Tom")
p2 = Person("John")
print(Person.number_of_people_())

