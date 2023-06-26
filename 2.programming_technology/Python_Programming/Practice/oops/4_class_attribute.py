""" 
" CLASS ARTTRIBUTE" it does not use self so it is not a regular attribute.
 it is defined for entire class, means it is not specific to any instance (like global variable).
 if we can access(or can be exported) this class attribute from another file also. 
"""

class Person:
    number_of_people = 0 # class Attribute 
    
    def __init__(self,name):
        self.name = name
        Person.number_of_people += 1
        
        
# Person.number_of_people = 4
p1 = Person("Tom")
print(Person.number_of_people)
p2 = Person("John")
print(p1.number_of_people)

