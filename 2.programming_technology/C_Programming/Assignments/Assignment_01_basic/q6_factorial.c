//Write a C program to calculate the factorial of given number

#include<stdio.h>
 int main()
{
	int num,f=1;
	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++)
	{
		f=f*i;
		
	}	
	printf("Factorial of %d is: %d \n",num,f);

return 0;
}



