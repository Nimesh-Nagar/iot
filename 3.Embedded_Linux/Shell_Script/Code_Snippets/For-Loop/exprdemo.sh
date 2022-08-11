#!/bin/bash
<<comment
The major difference between let and expr is that:
Instead of saving the result in a variable it prints the answer
comment

expr 5 + 4
expr "5 + 4"
expr 5+4
sum=$( expr 10 + 5 )
echo $sum
expr 5 \* $1   #$1 is command line argument \ is used to remove the special meaning of
                #character
expr 5 % 2

#Length of a varibale ${#varibale name}
a="hello world"
echo ${#a}


