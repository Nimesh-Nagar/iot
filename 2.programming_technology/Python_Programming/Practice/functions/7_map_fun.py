"""
Map Function : map(function, iterable)
             : returns an iterator that applies function to every item of iterable
"""

def make_even(num):
    if num%2 == 1:
        return num + 1
    else:
        return num

x = [551, 641, 122, 453, 224, 343]

print(map(make_even, x))  # <map object at 0x7100fee900d0>

y = list(map(make_even, x))
print(y)

# list comprehension and map function can be use interchangable
y = [make_even(num) for num in x]
print(y)

