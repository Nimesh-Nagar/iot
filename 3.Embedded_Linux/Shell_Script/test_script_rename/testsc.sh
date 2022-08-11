#!/bin/bash
#Explanation of mv command in loop
#"It's basically saying to populate $file with the full filename and 
#then remove everything after the % with the shortest match for .*, which would be any extension.
#${var%Pattern} Remove from $var the shortest part of $Pattern that matches the back end of $var.
for file in *.html
do
   #echo $file
   #echo "{$file%.html}.txt"
   mv "$file" "${file%.html}.txt"
done
<<comm
# assume you want to convert myfile.txt to myfile
$file="myfile.txt"
# move the current name to the current name excluding the shortest match of .* = .txt
mv "$file" "${file%.*}"
# expands to
mv "myfile.txt" "myfile"
comm
