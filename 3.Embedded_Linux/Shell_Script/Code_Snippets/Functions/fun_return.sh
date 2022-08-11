
function subtract {
    return $(($1-$2))
}
function sum {
    let num1=10
    let num2=20
    let sum_val=$num1+$num2
    return $sum_val
}
read -p  "Enter the first number : " number1
read -p  "Enter the second number : " number2
subtract $number1 $number2
echo "Subtraction of two numbers : "$?
sum
x=$?
echo "Addition is : "$x
