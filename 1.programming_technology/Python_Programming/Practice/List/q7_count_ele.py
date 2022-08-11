# Q7 Python Program to Count Occurrences of Element in List

lst = [1, 1, 2, 1, 3, 5, 2, 5, 6]

# size = int(input("enter size of list : "))
# lst = []
cnt = {}

# count = 0
# for i in range(0,size):
#     ele = int(input(" enter elemenst for list -- "))
#     lst.append(ele)
# print("List is : ",lst)

# print(lst)
for i in range(0,len(lst)):
    cnt[lst[i]] = lst.count(lst[i])

print(cnt)