
def fact(number):
    if(number==1):
        return 1
    else:
        return  number*fact(number-1)
        
if __name__ == "__main__":
    number =int(input("NUMBER :"))
    print(fact(number) )

