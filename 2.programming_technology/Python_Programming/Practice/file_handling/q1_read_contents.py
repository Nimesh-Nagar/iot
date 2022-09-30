# Q1 Python Program to Read the Contents of the File

a = str(input("Enter file name with .txt extension :- "))

file = open(a,'r')
line=file.readline() # reads only first line 
print(line)

# to read whole file use of while loop is necessary
while(line != ""):
    print("read file using while loop ",line)
    line = file.readline()

# another function to read whole file
read=file.readlines()
print("readlines function",read)



file.close()