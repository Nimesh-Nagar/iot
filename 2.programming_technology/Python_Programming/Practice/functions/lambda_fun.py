
"""
Lambda functions in Python, also known as anonymous functions, are small, 
functions defined using the lambda keyword.

    lambda arguments: expression
"""

# Example: Using Lambda Functions in a Custom Map Function
def map_function(func, values):
    return [func(value) for value in values]

    #Using a lambda function as the argument
doubled_values = map_function(lambda n: n * 2, [3, 6, 9, 12, 15])
print(doubled_values)  # Output: [6, 12, 18, 24, 30]

# Example: Creating Multiplier Functions with Lambdas
def create_multiplier(factor):
    return lambda x : x * factor


double = create_multiplier(2)
triple = create_multiplier(3)

print(double(5))
print(triple(5))

