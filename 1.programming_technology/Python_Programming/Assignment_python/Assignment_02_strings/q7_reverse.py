#7.Write a code to reverse every word of a paragraph


para="Reverse each element of para"

lst=para.split() # string into the list as split() function returns list

print("Split list is=",lst)

for i in range(0,len(lst)): 
		lst[i]=lst[i][::-1]
		
print("Reverse List is=",lst) #reversed para is

para=" ".join(lst) #final paragraph is printed from separated list

print("Reversed every word of Para is=",para)




