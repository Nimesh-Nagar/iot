#If syntax

# truevalue if expression else falsevalue
name= "Niddhant"
data = name if name.startswith("S") else "Wrong name" 
print(data)

#List comprehnsion
#[truevalue for variable in itertable_object if expression ]
lst=[]
for i in range(0,20):
	if i%2 == 0:
		lst.append(i)


data = [i for i in range(0,20) if i%2 == 0 ] #Unpacking process
print(data)

#Dictionary Comprehension 
#{truekey,value for i,j in itertable_object if expression }
l= [1,2,43,4]
d= ["a","b","c","d"]
data = { i:j for i,j in zip(l,d)  } #Unpacking process
print(data)
data = {i:j for i,j in x.items() if i == "Data"}

#[(),(),()]
