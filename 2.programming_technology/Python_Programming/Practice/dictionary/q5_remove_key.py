"""Q5 Program to Remove a Key from a Dictionary """

dict = {
    "name" : "nimesh",
    "last" : "nagar",
    "age" : 22
}

print("Before --> ",dict)
print("")
# del dict['age']
# print("After --> ",dict)

del_key = input("Enter key to delete (name,last,age) : ")

if del_key in dict:
    del dict[del_key]
else:
    print(f"{del_key} not found")

print(f"Updated Dictionary : {dict}")  
