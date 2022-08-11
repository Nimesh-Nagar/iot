#!/bin/bash
read -p "Enter the number : " number
if [ $number -lt 0 ]; then
    echo "Number is negative"
elif [ $number -gt 0 ]
then
    echo "Number is positive"
else
    echo "number is neither positive nor negative"
fi

#check if string is empty
string="abcd"
string_1=''
if [[ -z $string_1 ]]
then 
    echo "string is empty"
else
    echo "string is not empty"
fi
if [[ -n $string ]]
then 
    echo "string is not empty"
else
    echo "string is empty"
fi
