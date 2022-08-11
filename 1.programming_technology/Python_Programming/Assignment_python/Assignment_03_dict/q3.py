"""3.Write a code to create a dictonary from given number range

-If the input is 4 then the keys in dictionary are 1,2,3,4,5
-And value is square of the key
{1:1, 2:4, 3:9 ,4:16, 5:25}"""

d = {}
num=int(input("Enter the number : "))

for i in range(1,num+1):
    d[i] = i*i		# entering values in dictionary 
print(d)


