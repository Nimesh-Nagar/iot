"""Q3. Program to Add a Key-Value Pair to the Dictionary """

dict = {
    "name":"nimesh",
    "last":"nagar"
}

dict['post'] = "iot developer"
# print(dict)

key = input("enter new key for dict : ")
value = input("enter value for the new key : ")

dict.update({key:value}) # also use to concatinate 2 dictionary
print(dict)

# Using a dictionary comprehension  (gfg ;) )
new_key = 'key3'
new_value = 'value3'
 
updated_dict = {**dict, new_key: new_value}
print(updated_dict)
