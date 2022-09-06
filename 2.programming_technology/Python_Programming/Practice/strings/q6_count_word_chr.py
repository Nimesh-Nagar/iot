#Q6 Python Program to Count the Number of Words and Characters in a String



def count(str):    
    # to count words in sentence 
   new_str = string.split(" ")
   print(new_str)
   print("Number of Words : ",len(new_str))

   # to count Characters in sentence 
   count = 0 
   for ele in str:
        if ele != " ":
            count += 1
   print("Number of Characters : ",count) 

      
        

if __name__ =="__main__":
    string = input("enter string ")   #"Nimesh Nagar"
    count(string)