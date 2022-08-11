#Q9 Python Program to Find the Smallest Divisor of an Integer

def small_div(num):
    small = []
    for i in range(1,num+1):
        if(num%i == 0):
            small.append(i)
    print(small)        
    
    min = small[1]
    for i in range(2,len(small)):
        if small[i] < min:
            min = small[i]
    print(min)         


num  = int(input("enter number : "))

small_div(num)
# print(a)