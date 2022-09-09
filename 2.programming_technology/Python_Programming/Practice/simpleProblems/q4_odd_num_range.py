# Q4 Python Program to Print All Odd Numbers in a Range

def odd_in_range(start, limit):
    for i in range(start,limit+1):
        if(i%2==1):
            print(i,end=" ")



if __name__ =="__main__":
    
    start = int(input("enter Start number : "))
    limit = int(input("enter final number : "))
    if(limit < start or start <= 0):
        print("Please enter final number greater")
    else:
        odd_in_range(start,limit)