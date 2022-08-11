################################################	Defining a DICTIONARY	################################################ (page 91)

""" Understanding dictionaries allows you to model a variety of real-world objects more accurately. 
You’ll be able to create a dictionary represent­ing a person and then store as much information as you want about that person.
You can store their name, age, location, profession, and any other aspect of a person you can describe. 
You’ll be able to store any two kinds of information that can be matched up, such as a list of words and their meanings,
a list of people’s names and their favorite numbers, a list of mountains and their elevations, and so forth."""

# Consider a game featuring aliens that can have different colors and point values. This simple dictionary stores information about a particular alien:
# dictionary is collection of  key : value pairs

alien_0 = {'color': 'green', 'points': 5}
print(alien_0['color'])		#==> green
print(alien_0['points'])	#==> 5


################## 	Accessing Values in a Dictionary 	##################	

alien_1 = {"shape":"square","color": "green", "points": 5}
print(alien_1["shape"])	#==> square
print(alien_1['points']) #==> 5

############	Adding New Key-Value Pairs	###############

alien_0 = {'color': 'green', 'points': 5}
print(alien_0)
alien_0['x_position'] = 0
alien_0['y_position'] = 25
print(alien_0)		# {'color': 'green', 'points': 5, 'y_position': 25, 'x_position': 0}

######	Modifying Values

alien_0['color'] = 'yellow'
print(f"The alien is now {alien_0['color']}.")

######	Removing Values

del alien_0['points']
print(alien_0)

#######	A Dictionary of Similar Objects

print("*"*50)
favorite_languages = {
	'jen': 'python',
	'sarah': 'c',
	'edward': 'ruby',
	'phil': 'python',
}

print(favorite_languages)
language = favorite_languages['phil'].title()
print(f" phil's favorite language is {language}.")


############TTT	Loops	##########################
print("*"*100)
favorite_languages = {
	'jen': 'python',
	'sarah': 'c',
	'edward': 'ruby',
	'phil': 'python',
}
print("DICTIONARY : ",favorite_languages)
print("-"*50)

# to print both key and values separately
for key, value in favorite_languages.items():
	print("keys :",key)
	print("values : ",value)

# to print only keys
print("-"*50)
for i in favorite_languages.keys():
	print("keys :", i )

#To print only values	
print("-"*50)
for i in favorite_languages.values():
	print("values :", i )

print("-"*50)



















