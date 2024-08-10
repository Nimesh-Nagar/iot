#Example 1 : A Higher-Order Function that Takes a Function as an Argument (First Class Function)

def apply_operation(operation, x, y):
    return operation(x, y)

# Functions to pass as arguments
def add(x, y):
    return x + y

def multiply(x, y):
    return x * y

# Using the higher-order function
result_add = apply_operation(add, 3, 4)
result_multiply = apply_operation(multiply, 3, 4)

print(result_add)       # Output: 7
print(result_multiply)  # Output: 12

# Example 2: A Higher-Order Function that Returns Another Function (First Class Function)

def discount_applier(discount_rate):
    def apply_discount(price):
        return price - (price * discount_rate / 100)
    return apply_discount

# Creating closures with different discount rates
holiday_discount = discount_applier(20)
member_discount = discount_applier(15)

# Applying the discounts
print(holiday_discount(100))  # Output: 80.0
print(member_discount(100))   # Output: 85.0


