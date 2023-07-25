""" Access Specifiers
Specify the access level of an attribute/method.
Public, Protected, Private.
"""
# Private are accessible only inside the class
# are NOT accessible outside the class. 
# members which start with double underscore (__) are treated as private members.

class Car:
    def __init__(self, model, price):
        # private memebers
        self.__model = model
        self.__price = price

car1 = Car('i20', 7.5)

# print(car1.__model) # -->'Car' object has no attribute '__model' & '__price'
# print(car1.__price)  

# we can NOT access/modify the public members
car1.__model = 'new model'
car1.__price = 10.6
print(car1.__model)  # new model
print(car1.__price)  # 10.6