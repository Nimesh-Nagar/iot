#!/bin/sh
# echo will display the same msg. on monitor/console that is written inside the double quote
echo "List of the files in current directory"
#listing of files/diretory
ls -l
#How to store command value in variable for uses in the subsequent calls

#always use `command` in back tick
#example:
#create a directory test_dir
create_directory=`mkdir test_dir`
echo $create_directory
#always remember while assigning value to variable never give space

