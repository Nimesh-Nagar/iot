read -p "Enter the First number : " number1
read -p "Enter the Second number : " number2
number3=$((number1+number2))
echo $number3

read -p "Enter the First number : " number1
read -p "Enter the Second number : " number2
let number1=$number1
let number2=$number2
let number3=number1+number2
echo $number3
