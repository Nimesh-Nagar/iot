# https://www.freecodecamp.org/news/first-class-functions-and-closures-in-python/#:~:text=A%20closure%20is%20a%20feature,outer%20function%20has%20finished%20executing.




def add(a, b):
    return a + b

result = add(3, 4)

print(add)  # Prints the function object <function add at 0x7ca480eb7d90>
print(result)  # Prints 7

# [1] Let's assign the add function to a variable sum_function without calling it
sum_fun = add

# shows they both refer to the same function object 
print(add)      # <function add at 0x73c8d64efd90>
print(sum_fun)  # <function add at 0x73c8d64efd90>

del add
print(sum_fun(2,8))

#  *********************[2] Passing Functions as Arguments *********************
"""
Another aspect of first-class functions is the ability to pass them as arguments to other functions.
This allows for greater flexibility and modularity by enabling functions to operate on other
functions.
"""

def double(n):
    return n * 2

def map_function(func, values):
    result = []
    for value in values:
        result.append(func(value))

    return result    

doubled_values = map_function(double, [3,6,9,12,15])
print(doubled_values) # [6, 12, 18, 24, 30]

"""
[NOTE]: 
When passing the function, we do not include parentheses, 
indicating that we are passing the function itself and not the result of calling the function.
"""

#  *********************[3] Returning Functions from Other Functions *********************
"""
This concept allows for the creation of more complex and modular code, 
often used in scenarios like creating configurable functions or closures.
"""

def create_multiplier(factor):

    def multiplier(x):
        return x * factor
    
    return multiplier

double = create_multiplier(2)
triple = create_multiplier(3)

print(double(5)) # output 10
print(triple(5)) # output 15

# ****************** Higher-Order Functions ******************
""" 
Higher-order functions derive their power from the ability to treat functions as first-class citizens. 
This means functions can be passed as arguments to other functions or returned as values from them.
A higher-order function can:
    - Take one or more functions as arguments 
    - Return a function as its result

We've seen examples of both already: 
"""
