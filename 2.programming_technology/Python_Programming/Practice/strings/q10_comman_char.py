#Q10 Python Program to Find Common Characters in Two Strings

str1 = "nimesh nagar"
str2 = "mahendra"
result = []
for i in str1:
    for j in str2:
        if i == j:
            if j not in result:
                result.append(j)

print(result) 

# # Alternative menthod
# a = list(set(str1)|set(str2))
# print("comman letters are: ")
# for i in a :
#     print(i,end=" ")