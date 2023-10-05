""" Q2. Program to Check if a Key Exists in a Dictionary or Not"""

dict = {
    "name":"nimesh",
    "last":"nagar"
}

print(dict.get("last","no key in dictionary")) # get() is used to check the key is present in dict or not 
    # get("key to search","msg if key not found") # default msg is none 

"""it will through error "KeyError" if key not found """
# print(dict['age']) 


# ------------------ Another Approch ------------------ 

d={'A':1,'B':2,'C':3}

key=input("Enter key to check:")
if key in d.keys():
      print("Key is present and value of the key is:")
      print(d[key])
else:
      print("Key isn't present!")

