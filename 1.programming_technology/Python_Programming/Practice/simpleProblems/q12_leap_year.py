#Q12 Python Program to Check Whether a given Year is a Leap Year

def leap_year(yr):
    if(yr%4 == 0 and yr%100 != 0 or yr%400 == 0):
        print("{} is a Leap Year".format(yr))
    else:
        print("{} is not a leap year".format(yr))


year = int(input("enter year : "))
leap_year(year)