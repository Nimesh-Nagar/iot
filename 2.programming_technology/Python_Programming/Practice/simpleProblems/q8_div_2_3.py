#Q8 Python Program to Print All Integers that Aren’t Divisible by Either 2 or 3 bt 0 to 50


for i in range(1,51):
    if (i%2 != 0 and i%3 != 0):
        print(i)