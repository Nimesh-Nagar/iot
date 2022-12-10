# repacement automobile --> car , manufacturer --> maker , children --> kids

string_rep = "The automobile manufacturer recommends car seates for children if automobile dosen't already have one"
print("Original ---> ",string_rep)
my_list = string_rep.split(" ")
# print(my_list)

for i in range(len(my_list)):
    if my_list[i]=="automobile":
        my_list[i]="car"

    if my_list[i]=="manufacturer":
        my_list[i]="maker"

    if my_list[i]=="children":
        my_list[i]="kids"  


print(" ".join(my_list))        


