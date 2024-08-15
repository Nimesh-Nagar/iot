def add(x,y):
    return x + y 

print(add(4,5))

print(lambda x,y : x+y) # <function <lambda> at 0x7ec84d7eba30>

add2 = lambda x,y : x+y
print(add2(5,6))

print((lambda x,y : x+y)(5,15))

# -------------------- MAP internally works ------------------
def my_map(my_fun, my_iter):
    
    result = []
    for item in my_iter:
        new_item = my_fun(item)
        result.append(new_item)
    return result

nums = [1, 2, 3, 4]

cubed = my_map(lambda x: x**3, nums)
print(cubed)





