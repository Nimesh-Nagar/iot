/*Q2.Create three files(Header file, Code file and main file)
Code file contains the function to perform addition of n numbers and n variable
Main file contains main function that takes input from user for n variable and call the function to perform the addition of n numbers*/

#include<stdio.h>
#include"q2_declaration.h"//header file linked here


	
int main()
{
	int num;
	printf("Enter Number to perform addition=");
	scanf("%d",&num);
	int res = add(num);//sum returned from code.c file is received in res
	printf("res =%d\n",res);
	return 0;
}
