#!/bin/bash
let x=20
let y=30
let sum=x+y
echo "sum of $x and $y is " $sum

read -p "Enter first number : " num3
read -p "Enter Second Number : " num4
let m=$num3
let n=$num4
let mul=m*n
echo "$num3 * $num4 = " $mul

let num1=$1
let num2=$2
echo "Difference is "
let diff=num1-num2
echo $diff
