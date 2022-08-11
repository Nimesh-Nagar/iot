echo "username: $1"
echo "password: $2"
echo "FIle name: $0"
echo "PID of the current process/program: $$"
echo "Count of the arguments: $#"
echo "Argument supplied : $*"
echo "status of last command executed - 0 for success else fail : $?"
#This is mutiline comment
<<mycomment
Always remember : 
if the command line argument is greater that or equal to 10
then always write it inside {} while it is not mandetory for
command line argument <10
mycomment
echo "$10"  #observe the result
echo "${10}"