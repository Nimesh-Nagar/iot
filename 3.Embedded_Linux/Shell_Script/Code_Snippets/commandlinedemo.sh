#!/bin/bash
#Special Variables- 
# $0 - Represents commands or script
# $1 - $2 (1st and 2nd arugment)
# $# - Total number of arguments passed
# $* - Arguments supplied name
# $$ - Represents the PID of current script
#while running program enter ./commandlinedemo.sh <first arg> <second arg>

echo "Enter your Name " 
echo "name is: " $1
echo  "ENter your PRN number: "
echo "PRN NUMBER: " $2
echo "name of script: " $0
echo "Total Arguments: " $#
echo "process id of current script: " $$
echo "Arguments supplied are: " $*
