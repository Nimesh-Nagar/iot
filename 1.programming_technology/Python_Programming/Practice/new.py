''' 
you have to choose a set of intergers S form the range[1, N-1]such that the produce of integers in S is 1 modulo N. This means that if N=5,
we can choose set S = [1,2,3] as the product is 6 and 6 modulo 5 is 1.

Find the length of the biggest set S you can choose.

Input Format:
the first line contains an integer N denoting the given integer

Constrains:
1 <= N <= 5*10^5 

SAMPLE I/P ---- SAMPLE O/P ----- Explanation
7                   5           set(1,2,3,4,5) product 120 mod 7 is 1
5                   3           set(1,2,3) product is 6 mod 5 is 1    
4                   1           set(1)

'''
n = int(input("Enter number of inputs require "))
S = []

for i in range(1,n-1):
    S.append(i)
print(S)

mul = 1
for j in S:
    mul = mul * j
res = mul % n
print()
print("answer ",res)



