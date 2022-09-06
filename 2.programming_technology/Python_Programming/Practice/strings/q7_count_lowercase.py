# Python Program to Count Number of Lowercase Characters in a String


def count(str):  
    count = 0 
    for i in str:
        if i.islower():
            count += 1
    print("lower count : ",count)


string = input("enter string ")   #"Nimesh Nagar"
count(string)

