#Q3 Python Program to Count the Number of Lines in Text File

count = 0
with open("q3file.txt","r") as f:

    for line in f:
        count += 1

print("Total number of lines : ",count)
