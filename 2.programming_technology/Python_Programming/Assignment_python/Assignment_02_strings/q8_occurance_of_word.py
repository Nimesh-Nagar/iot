#Q8.Count the occurance of word in paragraph

para="She sells sea shells by the sea shore." 

words=para.split()
print("Paragraph : ",words)

find = input("Enter the world to count : ")

count = 0

for i in range(0,len(words)):
	words[i]==find
	count +=1
	
if count != 0:
	print("Word ",find,"occred for :",count, "Times")
else:
	print("Word not found")
