def add_num(num1,num2):
    return num1+num2
    

name = input("Enter your Name : ")
print("Welcome {0} to the world of containers !! ".format(name))
print("You are about to start your journer with python and docker")
number1= int(input("Enter first number :"))
number2= int(input("Enter Second number "))

result = add_num(number1,number2)
print("Addition of two numbers is : {0} ".format(result))