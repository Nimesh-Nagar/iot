# Class and Objects #

# main type of data ---> string, integer , float
# structute type of data --> list ,tuple, dictionary
'''
In real world we can not represent everythings this with strings, integer etc. like phone computer, 
car this can not be repersented only in strings or a number.  

-- With classes and object we can creat our own data type for any think.
-- Eg. phone data type it represent phone and all its informations .
-- from Class you can define your own data type .

Class is like a blue print and using this blue print we can creat an objects'''

# What is an object in Python? Explain with examples

"""
A python is an object-oriented programming language. Almost everything in Python is considered as an object. An object has its own properties(attributes) and behavior(methods).

A class is a blueprint of the objects or can be termed as object constructor for creating objects.

One class can have many objects and value of properties for different objects can be different. 
"""
# Example of properties and behavior of an object
"""
Let’s take the example of car as an object. Its properties will include its color, company name, year of manufacture , price , mileage etc. The behavior of the car will include the functions it can perform, this will include increase speed, decrease speed, apply brakes etc. Object basically related everything with real life objects. Everything we find around us in real life has some properties and some functions.
"""

#Example of class and object
"""
Different objects belonging to same class can have different properties. For example, Person(Human) can be treated as a class which has properties such as name, age,gender etc. Every individual can be treated as an object of the class human or Person. Each individual will have different values of the properties of class Person.Everyone will have different names, age and gender.
"""
#What is instantiation?
""" An object is also called an instance of a class. Thus, the process of creating object of a class is known as instantiation. """

#Defining class in Python
"""
As the function in Python is defined using the keyword ‘def’. The keyword ‘class’ is used to define a class in Python. Since the class is a blueprint of the object, all the common attributes and methods will be declared and defined in the class. Different objects which are created from the class can access those properties and functions. Different objects can hold their own values for properties defined inside the class.
"""

#Creating object in Python
"""
Creating object of a class is simple. The name of the class must be known and object can be created as follows −

Object_name= class_name()
"""
'''-------------------------------------------------------------------------------------------------'''
# Example:
class Person:
   name=""
   age=0
   city=""
   def display(self):
      print("Name : ",self.name)
      print("Age : ",self.age)
      print("City : ",self.city)

p1=Person()
p1.name="Rahul"
p1.age=20
p1.city="Kolkata"
p1.display()

print()

p2=Person()
p2.name="Karan"
p2.age=22
p2.city="Bangalore"
p2.display()

print()
p1.display()

'''------------------------------------------------------------------------------------------------'''

# to creat class
class Student:

    # initialized function has attributes like self.name, self.gpa etc....
    def __init__ (self, name, major, gpa, is_regular):
        self.name = name
        self.major = major
        #self.gpa = gpa
        self.is_regular = is_regular
        self.gpa = gpa

#Object is created using class 
std1 = Student("nimesh","PG-DIoT", 8.9, True)
std2 = Student("Leekhil","VLSI", 9.1, True)
  
''' -------------------------------------- Class methods -------------------------------------- '''
# Class method (like Functions) should be giving us info about class or it could be like modifing info about class 
class Student:

    def __init__ (self, name, major, gpa):
        self.name = name
        self.major = major
        self.gpa = gpa

    # method inside Class   
    def awarded(self):
        if self.gpa > 7.5:
            print(f"{self.name} should Awared")
            return 1
        else:
            print(f"{self.name} not Awared ")  
            return 2  


std1 = Student("Sam","Art",7.1)
std2 = Student("John", "Bussiness",7.8)  

# print(std1.gpa)
print(std1.awarded())



