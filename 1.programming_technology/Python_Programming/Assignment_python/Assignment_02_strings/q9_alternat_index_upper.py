#9.Write a code to change every alternate order word to Upper case

data="""The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""

words = data.split()		#paragraph is splited and split returns it as list

for i in range(0, len(words),2):	
# i iterates from 0th index to length, skipping alternate index as we have used step=2


	words[i] = words[i].upper()
	
data1 = " ".join(words)

print("Final output= \n",data1)
