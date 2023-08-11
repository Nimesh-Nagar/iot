"""  Decorators 
Decorators are a very powerful and useful tool in Python since it allows programmers 
to modify the behaviour of a function or class. 

Decorators allow us to wrap another function in order to extend the behaviour of the 
wrapped function, without permanently modifying it. 
    ----> https://www.geeksforgeeks.org/decorators-in-python/
"""

def start_end_decorator(func):

    def wrapper():
        print('Start')
        func()
        print('End')
    
    return wrapper

@start_end_decorator
def print_name():
    print('NimesH')

# print_name = start_end_decorator(print_name)

print_name()