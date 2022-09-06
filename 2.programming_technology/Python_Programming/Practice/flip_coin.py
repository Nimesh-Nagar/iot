
import random

while 1:

    input("Flipping a Coin.....\n")
  #  input("\n")
    toss= random.randint(1,2)
   # print(toss)
    if(toss==1):
         print("You go first...")
         flags=1
    else:
        print("Player 2 chance.")
        flags=2

    print("="*20)


    total = int(22)  #Total number of titile avilable
    print(f"There are ",total," titles")

    if(flags==1):
        count1=0
        count2=0
        p2=0
        while(total>0):
            
            p1 = int(input("How many would you like ? "))
            print("You have taken ",p1," titles")
            print("\n")
            total = total-p1    # decrement
            count1 = count1 + 1  #keeping track

        
            if(total>0):
                print("There are ",total,"titles left")
                p2= random.randint(1,3)
                print("Player 2 has taken ",p2," titles.")
                total = total-p2
                print("There are ",total,"titles left")
                print("\n")

                if(total<=0):
                    if(count1==count2):
                        print("You Wins")
                else:
                    print("P2 Wins") 
            else:
                if(count1==count2):
                    print("You Wins")
                else:
                    print("P2 Wins")    

    elif(flags==1):  
        print("reverse condition")
        exit


 

           