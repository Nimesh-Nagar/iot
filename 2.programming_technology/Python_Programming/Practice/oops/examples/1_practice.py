
class Dog:

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def get_name(self):
        print(self.name)

    def get_age(self):
        print(self.age)  

    def set_age(self, age):
        self.age = age

d1 = Dog("Bill", 12)
# d1.get_name()
# d2 = Dog("Tim", 16)
# d2.get_name()
# d2.get_age()

d1.get_name()
d1.get_age()
# updating age of dog
print("After set method ")
d1.set_age(15)
d1.get_age()