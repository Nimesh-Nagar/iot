"""Q4. Program to Find the Sum of All the Items in a Dictionary """

dict = {
    "a":1, 
    "b":2,
    "c":4
}

counter = 0
for i in dict.values():
    counter += i 

print(counter)
print("another approch ")

print(sum(dict.values())) # power of python one line code :) 
