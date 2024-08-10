"""
A closure is a feature in many programming languages, including Python, 
that allows a function to remember and access variables from an enclosing 
scope even after the outer function has finished executing.

In simpler terms, a closure is an inner function that has access to variables 
from its containing (or outer) function, even after that outer function has completed its execution.

"""

def outer_scope():
    name = 'Sam'
    city = 'New York'

    def inner_scope():
        print(f"Hello {name}, Greetings from {city}")

    return inner_scope()
    
outer_scope()


# -------------------
#  Returning the Inner Function
#-----------------

def outer_scope():
    name = 'Sam'
    city = 'New York'

    def inner_scope():
        print(f"Hello {name}, Greetings from {city}")

    return inner_scope
    
# Assigning the inner function to a variable
greeting_func = outer_scope()

# Calling the inner function
greeting_func()

# -----------------------------------------
# Using Closures with Parameters
# -----------------------------------------

def outer_scope(name, city):

    def inner_scope():
        print(f"Hello {name}, Greetings from {city}")

    return inner_scope

# Creating closures with different names and locations
greet_priyanshu = outer_scope('Dr Priyanshu', 'Jaipur')
greet_sam = outer_scope('Sam', 'New York')

# Executing the closures
greet_priyanshu()    # Output: Hello Dr Priyanshu, Greetings from Jaipur
greet_sam()     # Output: Hello Sam, Greetings from New York


