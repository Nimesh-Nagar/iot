//Write a program to print n even numbers(take n input from user)
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
	printf("Even no. are=");
	for(int i=1;i<=n;i++)
	{
	if(i%2==0)
	{
	printf("%d ",i);
	}
	}
}
int main()
{
	int n=input();
	prime(n);
	return 0;
}	
