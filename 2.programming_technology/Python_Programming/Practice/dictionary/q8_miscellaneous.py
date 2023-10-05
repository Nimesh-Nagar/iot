"""Q8. Program to Create a Dictionary with Key as First Character and Value as Words Starting with that Character """

source = '''GeeksforGeeks is a Computer Science portal for geeks. It contains well written, well thought and well explained computer science and programming articles, quizzes etc.'''
dict = {}

words = source.lower().split(" ")

for word in words:

    # If key is not present in the dictionary then we
    # will add the key and word to the dictionary.
    if word[0] not in dict.keys():
        dict[word[0]] = []
        dict[word[0]].append(word)

    # If key is present then checking for the word
    else:
        if word not in dict[word[0]]:
            dict[word[0]].append(word)

# print(dict)

for k,v in dict.items():
    print(k," : ",v)
