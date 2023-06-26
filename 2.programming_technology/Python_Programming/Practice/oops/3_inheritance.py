class Pet:
    
    def __init__(self, name , age):
        self.name = name
        self.age = age
        
    def show(self):
        print(f"Hello I am {self.name} and I am {self.age} years Old ")
        
    def speak(self):
        print("I Don't know What I say ")

# inheritaing methods and attributes of Pet class into Dog and Cat class by just using name of parent class
class Dog(Pet):
    
    def __init__(self, name, age, color):
        super().__init__(name, age)
        self.color = color
    
    def speak(self):
        print("Bark ")

    def show(self):
        print(f"Hello I am {self.name} and I am {self.age} years old and I am {self.color} ")


class Cat(Pet):
    def speak(self):
        print("Meow")
        
p = Pet("p cat", 4)
p.speak()

# here dog object "d" is created and it is calling init() and show() methods of Pet class 
d = Dog("TIM",6,"Brown") 
d.show()

c = Cat("Tom",4)
c.show()
c.speak()

