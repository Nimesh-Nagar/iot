#!/bin/bash
: '
Take user
input from 
the command line - This is one of the styles of 
the multiline comment
'
<<comment
This is 
another way to write comment
comment
#take user input
read -p "Enter your name : " name
read -p "Enter your age : " age 
echo "Hello !! Mr. $name welcome to the world of IoT"
echo "Your age is $age, seems so young to learn shell scripting"
