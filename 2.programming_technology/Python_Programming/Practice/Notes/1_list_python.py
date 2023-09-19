"""  ' ------ List Operations are done with List Methods ------ '
1. Create a List, 
2. Display a list, 
3. Inserting an element into a list at the last position 
4. Inserting an element into a list at the Required position 
5. Insertion of multiple elements at a time at the end of the list {  lst.extend([70,80,90])  }
6. Insertion of multiple elements into the list at our required position. { l1[4:4]=range(31,36) --Inserting 31,32,33,34,35 }
7. Deleting an element in a list by specifying 'element'
8. Deleting 'last-element' from a list
9. Deleting an element from a list by specifying an 'index'
10. Deleting multiple elements from a list by specifying an indexes { del lst[1:5]	}
11. Deleting all elements from the list { lst.clear() }
12. Deleting total list {del lst --- >>>lst  " NameError: name 'l1' is not defined"}
13. Reversing the elements of a list
14. Sorting a list
15. Sorting in a reversed order {	l1.sort(reverse=True)	}
16. Copying a list	{ l2=l1.copy() }
17. Concatenation of lists { list3=list1+list2 }
18. Comparison of lists
19. Creation of Nested lists 

"""

#lists  page33  

motorcycles = ['honda', 'yamaha', 'suzuki']
				# 0	   		1	     2		

motorcycles.append("ducati")
print(motorcycles)
motorcycles.insert(1,"hero")
print("Inserting at index 1",motorcycles)	# ['honda', 'hero', 'yamaha', 'suzuki', 'ducati']

# when you want to delete an item from a list permanently and not use that item in any way, use the del statement;
del motorcycles[0]
print("Deleting permanently :",motorcycles)	 #['hero', 'yamaha', 'suzuki', 'ducati']



# if you want to use an item once as you remove it, use the pop() method.
#pop()
motorcycles = ['honda', 'yamaha', 'hero','suzuki']
print(motorcycles)
popped_motorcycle = motorcycles.pop() 	# last indexed element will poped out
print(motorcycles)		# ['honda', 'yamaha', 'hero']
print("Popped element form list:",popped_motorcycle)	# suzuki
print()
popped_index = motorcycles.pop(1)
print("after pop(1) funcion :",motorcycles) 
print("Index popped(1):",popped_index) # yamaha

#insert() and remove()
motorcycles = ['honda', 'yamaha', 'hero','suzuki']
motorcycles.insert(2,"ducati")		#==> ['honda', 'yamaha', 'ducati', 'hero', 'suzuki']
motorcycles.remove("ducati")
print("remove_by_value:",motorcycles) #==> ['honda', 'yamaha', 'hero', 'suzuki']

### Sorting a List Permanently with the sort() Method ####
cars = ['bmw', 'audi', 'toyota', 'subaru']
cars.sort()
print("Sort:",cars) #==>['audi', 'bmw', 'subaru', 'toyota']

### Reversing a List reverse() Method ####
cars.reverse()
print("Reverse:",cars)	#['toyota', 'subaru', 'bmw', 'audi']

####################################################################################################################################
############# looping through entire list ########################
print("#"*80)
"When you want to do the same action with every item in a list, you can use Python's for loop."

magicians = ['alice', 'david', 'carolina']
for i in magicians:	#for loop here i is variable
	print(f"{i.title()}, that was a great trick!") #.title for upper case of first letter

for value in range(1, 5):
	print(value) #==> 1 2 3 4

numbers = list(range(1, 6))
print(numbers)	#==> [1, 2, 3, 4, 5]

even_numbers = list(range(2, 11, 2))
print(even_numbers)	#==> [2, 4, 6, 8, 10]


##############		Slicing a List		################# 
print("#"*80)
"To make a slice, you specify the index of the first and last elements you want to work with"
players = ['charles', 'martina', 'michael', 'florence', 'eli']
	###   		0	  	1	      	2 	 		3 	    4
	### 	 	-5	 	-4	     	-3 			-2 	   -1

print("Original list:",players)
print(players[0:3])	#==> ['charles', 'martina', 'michael']
						#	0			1			2
print(players[-3:]) #==> ['michael', 'florence', 'eli']

std = ["Tushar","Abdur","Abhishek","Sundram"]
sts = ["Kiran","Vivek","Nancy"]

lst = sts + std
print(lst) # concatiation of two strings
print(std.index('Abdur')) # index number of Abdur = 1 

print(std == sts )	# matches each elements of list --> returns false/true 
print(std != sts)
print(std > sts)
print(std < sts)


#############	Looping Through a slice 	########## 
print("Here are the first three players on my team:")
for player in players[:3]:
	print(player.title())

n = 5
for i in range(1,n+1):
    print(i,end=" ")			#to print values in single line i.e 12345 (end="" without space)
							#(end=" " with space)

































