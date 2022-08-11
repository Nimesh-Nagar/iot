read -p "Enter the destination of the file to be copied : " path
read -p "enter the name of the file : " file_name
cp $file_name $path
echo "Copied successfully"

#write a shell script that creates a directory:
#take input from the user - params:
    #1. abosulute path with directory name 
    #example /home/diot/test_dir
    #/home/diot is path and test_dir directory to be created.
read -p "Enter the dir name with full path : " $path
mkdir $path