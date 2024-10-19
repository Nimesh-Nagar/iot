"""
reduce(function, cllections) = Reduces elements in a collection to a single value
                               For loop is brtter in most cases
                               Reduce is better for a function approach + readability
"""

from functools import reduce 

def add(x,y):
    return x + y

prices = [50, 20, 30, 56, 41, 28]

# total = reduce(add,prices)
total = reduce(lambda x,y: x+y, prices)

print(f"Rs. {total}")

