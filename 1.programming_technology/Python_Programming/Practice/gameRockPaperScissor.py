#  Two player game rock, paper and scissor 
#  Rules : ROCK > SCISSOR 
#          SCISSOR  > PAPER 
#          PAPER > ROCK
import random

i=1
cp1=0 
cp2=0
print("****************************ROCK PAPER SCISSOR GAME ***************************** ") 
while(i<=5):

    print()
    print(f"ROUND:",i)
    you= input("Enter your choice : ")
  #  computer= input("Enter P2 choice : ")

    game = ["rock","paper","scissor"]
    str=random.choices(game)
    computer=" ".join(str)
    print(f"Computer chooses = ",computer)

    i=i+1

  
    if(you == computer):
        print("Match draw ....")

    elif(you=="rock" and computer=="scissor"):
        print("YOU WON !! ")
        cp1=cp1+1
    elif(you=="scissor" and computer=="paper"):
        print("YOU WON !! ") 
        cp1=cp1+1 
    elif(you=="paper" and computer=="rock"):
        print("YOU WON !! ") 
        cp1=cp1+1

    elif(computer=="rock" and you=="scissor"):
        print("Computer WON !! ")
        cp2=cp2+1
    elif(computer=="scissor" and you=="paper"):
        print("Computer WON !! ") 
        cp2=cp2+1 
    elif(computer=="paper" and you=="rock"):
        print("Computer WON !! ") 
        cp2=cp2+1 
    

if(cp1>cp2):
    print("---------------YOU WON the series--------------")
elif(cp2>cp1):
    print("---------------Computer WON the series--------------")

else:
    print("----------------------   SERIES DRAW    -------------------")










    
       


