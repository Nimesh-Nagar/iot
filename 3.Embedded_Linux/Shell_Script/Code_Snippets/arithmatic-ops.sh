<< com
There are differnt ways to perform
arithmatic operations
1. using declare
2. using expr
3. using let
4. using (()) - for integers
5. using bc -  for integers and float (bash cal)
com

x=2
y=7
((sum=x+y))
echo "x + y : $sum"
x=7
((x++))
echo $x
((--x))
echo $x
((++x + x--))
echo $x
