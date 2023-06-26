""" 
sometime need class that have organised function in it.
they do something but not change

"""

class Math:
    
    @staticmethod
    def add5(x):
        return x + 5
    
    @staticmethod
    def add10(x):
        return x + 10
    
    @staticmethod
    def prn():
        print("run")
    
print(Math.add5(5))
print(Math.add10(5))
Math.prn()
