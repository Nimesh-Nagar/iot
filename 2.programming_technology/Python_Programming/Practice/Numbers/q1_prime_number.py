#Q1 Python Program to Find Prime Numbers in a Given Range

if __name__ == "__main__":
    
    st = int(input("Enter Starting number of Range "))
    en = int(input("Enter Ending number of Range "))

    if(st > en):
        print("Ending number should be greater than starting number ")
    
    for i in range(st,en+1):
        if i == 1:
            continue
        flag = 1
        
        for j in range(2, i//2 + 1):
            if (i%j == 0):
                flag = 0
                break
        if (flag == 1):
            print(i ,end=" ")
        
    
    

