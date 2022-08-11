//Write a program to find given number is palindrome or not
#include<stdio.h>

int input()
{
	int n;
	printf("Enter the given number=");
	scanf("%d",&n);
	return n;
}
void palindrone(int n)
{
	int r,sum=0;
	int num=n;
	while(n>0)
	{
	r=n%10;
	sum=sum*10+r;
	n=n/10;
	}
	
	if(sum==num)
	{
	printf("Given no. is palindrone");
	}
	else
	{
	printf("Given no. is not palindrone");
	}
}

int main()
{
	int n=input();
	palindrone(n);
	return 0;
}	
