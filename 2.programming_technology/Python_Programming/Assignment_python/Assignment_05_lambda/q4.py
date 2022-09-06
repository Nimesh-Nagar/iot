#! /usr/bin/python3

s = input("Enter a paragraph : ")
s = s.split()
dic = {}
count=0
for i in s:
	count=s.count(i)
	dic[i]= count
print(dic)
		
