"""
GCD or HCF of Two Numbers:
Given two numbers. The task is to find the GCD of the two numbers.
"""
#[Method 1] Using the module. math.gcd() function compute the greatest common divisor of 2 numbers mentioned in its arguments.

import math 
print("The GCD or HCF of 60 and 48 is : ", end="")
print(math.gcd(60,48))

#[Method 2] Using Euclidean Algorithm

def gcd(a,b):
    
    while a != b:
        
        if a > b:
            a = a - b
        else:
            b = b - a 
    return a

if __name__ == "__main__":
    
    a = 12
    b = 15
    print(f"GCD of {a} and {b} using Euclidean Algorithm : ",gcd(a,b))

#[Method 3] Optimised Eculidean Algorithm 

def hcf(a,b):
    
    if b == 0:
        return a
    else:
        return hcf(b, a%b)
    
        

if __name__ == "__main__":
    
    a = 12
    b = 15
    print(f"HCF of {a} and {b} using Euclidean Algorithm : ",hcf(a,b))
