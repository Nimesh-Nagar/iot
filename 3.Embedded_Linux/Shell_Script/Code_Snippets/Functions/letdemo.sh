#!/bin/bash
let a=5+4
echo "The value of a is : $a"
read -p "Enter number 1: " num1
read -p "Enter Number 2 : " num2
let sum=$num1+$num2
echo "sum of $num1 + $num2 = $sum"

let sum++
echo "new value of sum is : $sum"


