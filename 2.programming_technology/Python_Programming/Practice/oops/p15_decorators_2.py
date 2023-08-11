# functions with arguments
import functools

def my_decorator(func):
 
    @functools.wraps(func)  # used to store name of fun on which wrapper function is implemented
    def wrapper(*args, **kwargs): # we can use as many args and keyword args as possible 
        print("Start")
        result = func(*args, **kwargs)
        print("End")
        return result
    return wrapper

@my_decorator    
def add5(x):
    return x + 5 

# # shows info of wrapper function. 
# print(help(add5))
# print(add5.__name__) 

print(add5(10)) # error : wrapper() takes 0 positional arguments but 1 was given,
                # when no argument is given to wrapper function 

