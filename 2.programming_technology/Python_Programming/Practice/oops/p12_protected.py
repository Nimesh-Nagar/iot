""" Access Specifiers
Specify the access level of an attribute/method.
Public, Protected, Private.
"""
# Protected are accessible in the same class and all of its child-classes
# use underscore (_) as a prefix.

class Vehicle:

    def __init__(self, engine):
        # protected memebers
        self._engine = engine

class Car(Vehicle):
    def __init__(self, engine, model, price):
        super().__init__(engine)
        # protected memebers
        self._model = model
        self._price = price

    def print_info(self):
        # protected member is accessible in child class
        print(f"Engine: {self._engine} ")
        print(f"Model : {self._model} ")
        print(f"Price : {self._price} L")

par_obj = Vehicle('Desel')
obj = Car('electric', 'Nexon', 15)

obj.print_info()
print(obj._engine)
