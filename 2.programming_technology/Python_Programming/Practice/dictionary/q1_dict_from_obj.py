""" Q1. To Create Dictionary from an Object """

class A (object):

    def __init__(self):
        self.A = 1
        self.B = 2

obj = A()
print(obj.__dict__)


"""
Explanation :

1. Class named A is declared.
2. The keys are initialized with their values in the __init__ method of the class.
3. The dictionary is formed using the object of the class and by using the __dict__ method.
4. The dictionary formed from the object of the class is printed.

"""