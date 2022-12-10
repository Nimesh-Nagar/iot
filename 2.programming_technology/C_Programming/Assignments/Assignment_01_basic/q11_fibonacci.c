// Fibonacci series

#include<stdio.h>

int main()
{
	int num,a=0,b=1,c;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	//print first two numbers
	printf("\n Fibonacci Series %d %d ",a,b);

	for(int i=2;i<num;i++)
	{
		c = a+b;		
		printf("%d ",c);
		a=b;
		b=c;					
	}

	return 0;
}
