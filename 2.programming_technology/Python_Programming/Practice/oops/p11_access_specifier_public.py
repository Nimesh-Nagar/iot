""" Access Specifiers
Specify the access level of an attribute/method.
Public, Protected or Private.
"""
# Public are accessible outside the class
# any member declared without using any underscore is treated as public member.

class Car: 
    def __init__(self, model, price):
    
        #public menbers
        self.model = model
        self.price = price 

car_obj = Car('Nexon', 15)

print(car_obj.model)
print(car_obj.price)

# we can access/modify the public members
car_obj.model = 'Tesla'
car_obj.price = 50

print(f"After modification : {car_obj.model}")
print(f"After modification : {car_obj.price}")