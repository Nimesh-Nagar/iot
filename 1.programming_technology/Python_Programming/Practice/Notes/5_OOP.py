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
