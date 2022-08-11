#!/bin/bash
read -p "enter first string : " str1
read -p "enter second string : " str2
if [ $str1 = $str2 ]; then
    echo "Strings are equal"
else
    echo "Strings are not equal"
fi
#Recommended for pattern matching.
if [[ $str1 == "Hi" ]]; then
    echo "Strings are equal"
else
    echo "Strings are not equal"
fi

#Second Method