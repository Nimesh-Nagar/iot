// Fibonacci series

#include<stdio.h>

int main()
{
	int num,a=0,b=1,c;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("%d\n%d\n",a,b);

	for(int i=2;i<num;i++)
	{
		printf("%d/t",a)
		c = a+b;		
		a=b;
		b=c;					
	}

	return 0;
}
