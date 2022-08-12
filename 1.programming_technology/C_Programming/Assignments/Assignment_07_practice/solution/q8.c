//Write a program to print n fibonnaci numbers(Take n from user)

#include<stdio.h>
int input()
{
	int n;
	printf("Enter the n no.=");
	scanf("%d",&n);
	return n;
}
void fib(int n)
{	
	int n1=0,n2=1,n3;
	
	for(int i=0;i<n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
		
	
	}
}
int main()
{
	int n=input();
	printf("Fibonnaci series = 0 1 ");
	fib(n);
	return 0;
}	
