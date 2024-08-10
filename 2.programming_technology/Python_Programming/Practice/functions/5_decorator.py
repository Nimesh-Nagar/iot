import time 
import math 

def calculate_time(func):
    
    def wrapper_fun(*args, **kwargs):
        
        begin = time.time()
        
        func(*args, **kwargs)
        
        end = time.time()
        print("Total taken by ", func.__name__, end-begin)
        
    return wrapper_fun
 
@calculate_time   
def factorial(num):
    time.sleep(2)
    print(math.factorial(num))
    

# factorial = calculate_time(factorial)
factorial(6)