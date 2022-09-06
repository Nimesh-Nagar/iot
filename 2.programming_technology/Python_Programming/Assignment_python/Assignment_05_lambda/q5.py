#5. Write a program to generate list of numbers from 10 to 50, Use map to find square of all numbers from list

l=list(range(10,51))  
print("\nList : ",l)


result = list(map(lambda x : x ** 2, l))
print("\n Square of all elements :",result)


