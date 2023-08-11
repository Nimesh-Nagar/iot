"""
insted of return 'yield' keyword is used.  
Generator does not hold the entire result in memory it yield one result at time.
It is waiting for us to ask next result.      
"""

def square_numbers(num):
    for i in num:
        yield (i*i)

my_num = square_numbers([1,2,3,4,5])
print(my_num)       # <generator object square_numbers at 0x7f76a9d00f90>

# next() is used to print results
print(next(my_num))
print(next(my_num))
print(next(my_num))
print(next(my_num))
print(next(my_num))

# print(next(my_num)) # StopIteration. ---> If more than list size
print("")
for num in my_num:
    print(num) 
    
## LIST COMPRIHENSION 
""" 
# my_num = [x*x for x in [1,2,3,4,5]] # normal List comprehension 
my_num = (x*x for x in [1,2,3,4,5]) # Generator

print(my_num)

# print(list(my_num)) 
#       OR

for num in my_num:
    print(num)

"""    
    