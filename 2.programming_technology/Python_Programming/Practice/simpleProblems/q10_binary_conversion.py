#Q10 Python Program to Print Binary Equivalent of a Number without Using Recursion

def bina_con(num):
    bin_list=[]
    while num !=0:
        rem = num%2
        quo = num//2
        num = quo
        bin_list.append(rem)

    bin_list.reverse()
    # print(bin_list)
    return bin_list

num = int(input("number  : "))
a= bina_con(num)
print(a)
