# parameterized decorator

import functools

def repeat(num_times):
    def decorator_repeat(func):
        
        @functools.wraps(func)
        def wrapper(*args, **kwargs):
            for _ in range(num_times):
                result = func(*args, **kwargs)
            return result
        return wrapper
    return decorator_repeat

# with help of decorator we will call below function n times.
@repeat(num_times=5)
def greet(name):
    print(f"Hello {name}")

greet('Nimesh')

