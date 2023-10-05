"""Q7. Program to Map Two Lists into a Dictionary """

""" METHOD 1 """
# dict = {}
# emp_name = ['Nimesh','Jeet','Abhi']
# emp_num = [101,102,103]

# length = len(emp_name)

# for i in range(length):
#     dict.update( {emp_name[i] : emp_num[i]} )    

# print(dict)

""" METHOD 2 """

# key = []
# value = []

# lent = int(input("Enter size of dictionary : "))

# print("Enter names of Employe ")
# for i in range(lent):
#     ele = input("Enter name "+ str(i+1) +" : ")
#     key.append(ele)

# print("Enter Employe ID : ")
# for j in range(lent):
#     ele = int(input("Enter ID "+str(j+i)+ " : "))
#     value.append(ele)

# d = dict(zip(key,value))

# print(d)


""" METHOD 3 """

# emp_name = ['Nimesh','Jeet','Abhi']
# emp_num = [101,102,103]

# res = {}

# for key in emp_name:
#     for value in emp_num:
#         res[key] = value
#         emp_num.remove(value)
#         break 

# print(res)

""" METHOD 4 """

emp_name = ['Nimesh','Jeet','Abhi']
emp_num = [101,102,103]

# print(dict(zip(emp_name, emp_num)))

# dictionary comprehention
res2 = { emp_name[i]: emp_num[i] for i in range(len(emp_name))} 
print(res2)

