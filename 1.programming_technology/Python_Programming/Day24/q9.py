
def process_data(data):
	words = data.split(" ")
	for i in range(1,len(words),2):
		words[i] = words[i].upper()
	#print(words)
	return " ".join(words)




data="""The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""

new_data = process_data(data)
print(new_data)
