/*
	Design a calculator using fork system call
	parent block : Multiply and Division
	child block : Addition and Subtraction
	code maintained by : bhupendra.jmd@gmail.com

*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int add_Two_Numbers(int num1, int num2);
int subtract_Two_Numbers(int num1, int num2);
int multiply_Two_Numbers (int num1, int num2);
int division_Two_Numbers (int num1, int num2);
int main()
{
   int number1, number2;
   pid_t ret;
   printf("calculator design using fork system call\n");
   printf("Don't enter any number as Zero (Shunya)\n");
   printf("Enter First Number \n");
   scanf("%d", &number1);
   printf("Enter second number\n");
   scanf("%d",&number2);
   ret = fork(); //fork system call
   //test case to handle if child is not created by parent
   if(ret < 0)
   {
       perror("Error in creating child process\n");
   }
   //test case if child is created
   else if(ret == 0 )
   {
      printf("***Execution result from child process***\n");
      printf("\n");
      add_Two_Numbers(number1,number2);
      subtract_Two_Numbers(number1,number2);
   }
   //test case for parent process
   else
   {
       printf("***Execution result from parent process***\n");
       printf("\n");
       multiply_Two_Numbers(number1,number2);
       division_Two_Numbers(number1,number2);
    }
   
}
int add_Two_Numbers(int x, int y)
{
  int result = x + y;
  printf("sum of number %d & %d is = %d\n",x,y,result);
  printf("\n");
}
int subtract_Two_Numbers(int x, int y)
{
  int result = x - y;
  printf("Difference of number %d & %d is = %d\n",x,y,result);
  printf("\n");
}
int multiply_Two_Numbers(int x, int y)
{
  int result = x * y;
  printf("multiplication of numbers %d & %d is = %d\n",x,y,result);
  printf("\n");
}
int division_Two_Numbers(int x, int y)
{
  int result = x / y;
  printf("Division of number %d & %d is = %d\n",x,y,result);
  printf("\n");
}
