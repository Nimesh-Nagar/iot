//Write a program to find given number is prime number or not
#include<stdio.h>
int input()
{
	int n;
	printf("Enter the n no.=");
	scanf("%d",&n);
	return n;
}
void prime(int n)
{	
	int flag=1; 
	for(int i=1;i<=n;i++)
	{
	if((i==1)||(n%i==0))
	{
	flag=0;
	}
	}
	if (flag==1)
	{
	printf("it is prime no.");
	}
	else
	{
	printf("it is prime no.");
	}
}
int main()
{
	int n=input();
	prime(n);
	return 0;
}	
