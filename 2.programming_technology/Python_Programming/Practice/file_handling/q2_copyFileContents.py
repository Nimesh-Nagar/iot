#Q2 Python Program to Copy One File to Another File

file1 = open("q2.txt" , "r")
file2 = open("q2copy.txt" , "w+")

for line in file1 :
    file2.write(line)

while(line != ""):
    print("read file using while loop -----> ",line)
    line = file2.readline()

file1.close()
file2.close()
