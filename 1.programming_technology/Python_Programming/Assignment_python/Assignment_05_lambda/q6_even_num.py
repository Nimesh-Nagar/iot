#6. Write a program to generate list of numbers from 10 to 50, Use filter to find all even numbers from list

l=list(range(10,51))  
#print("\nList : ",l)

#even_num = list(filter(lambda x : x%2==0,l))
#print("\n All Even number in list",even_num)

print("EVEN NUMBERS :",list(filter(lambda x : x%2==0,l)))
