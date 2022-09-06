#Q9 Python Program to Count the Number of Vowels in a String

str = "qw rty uip "
vowels = ['a','e','i','o','u']

count = 0
for i in str:
    if i in vowels:
        count += 1
print("Number of Vowels ",count)        
         