#!/bin/bash
<<com
first way
sum(){

}
second way
function sum{

}

com
function sum {
    let res=$1+$2
    echo $res
}
sum 10 29

function quote #space is mandetory after function name
{
    echo "Hard work is key to success"
}
quote

function subtract {
    let num1=$1
    let num2=$2
    let sub=num1-num2
    return sub
}
value=$((subtract 10 20))
echo $value