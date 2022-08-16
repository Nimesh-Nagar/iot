

f=lambda x,y: ["PASS",x,y] if x > 3 and y < 100 else ["FAIL",x,y]
print(f(4,2)) 

#lambda function example 2
# functions such as map, filter i lambda take two parameters 
temp_c = [10,3,-5,2,9,29,-10,5] 
temp_f = (map(lambda x : (x*1.8)+32,temp_c))
print(f"temp in fahrenheit",temp_f)

# example 3
numbers = range(-15,15)
less_than_zero = filter(lambda x : x < 0,numbers)
print(list(less_than_zero))

# example 4
y =[5]
x = list(map(lambda x : x+10,y))
print(x)

x =lambda a: a+10
print("Addidion ",x(10))

x= lambda a,b : a*b
print("Multiplication ",x(5,6))



