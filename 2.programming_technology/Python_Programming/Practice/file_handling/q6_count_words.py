#Q6 Python Program to Count the Number of Words in a Text File

a = input("Enter full name of file : ")
with open(a,"r") as f :
    data = f.readlines()
    for line in data:
        word = line.split()

print("number of words : ",len(word))