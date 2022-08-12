#include<stdio.h>

int input()
{	int num;
	printf("Enter number to be checked=");
	scanf("%d",&num);
	return num;
}
int prime(int n)
{
	int i,factor=0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		factor++;
	}
	if(factor==2)
		{
			printf("%d is Prime number\n",n);
		}
	else 
		{
			printf("%d is not Prime number\n",n);
		}

}
int main()
{
	int n = input();
	prime(n);
	return 0;
}
