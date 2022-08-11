<<comment
There are two ways to declare the function in shell
function_name () {
    commands/statement
}
Single line
functionname() {commands;}

function functionname {
    commands
}
function functionname { commands}
comment

helloworld () {
    echo "Hello $1"
    echo "Shell syntax is very difficult"
}
<<comment
if you are using command line argument inside function body then provide the value of
of Commandline argument just after the function name

To pass any number of arguments to the bash function simply 
put them right after the function’s name, separated by a space. 
It is a good practice to double-quote the arguments to 
avoid the misparsing of an argument with spaces in it.

The passed parameters are $1, $2, $3 … $n, 
corresponding to the position of the parameter after the function’s name.
com
comment

#call a function

helloworld "Diot2020"

read -p "Enter the name with whom you want to say hello : " hello
helloworld $hello
#passing argument in function
sum (){
    let result=$1+$2
    res=$(($1+$2))
    expr $1 + $2
    echo $res
    echo $result
}
sum "10" "20"
