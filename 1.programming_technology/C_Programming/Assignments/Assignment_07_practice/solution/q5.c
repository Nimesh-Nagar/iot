//Write a program to implement a interest calculator

#include<stdio.h>
int input()
{
	int a;
	scanf("%d",&a);
	return a;
}
int interest(int p,int r,int t)
{
	int result;
	result =p*r*t;
	return result;
}

int main()
{
	printf("Enter the principal=");
	int p=input();
	printf("Enter the rate=");
	int r=input();
	printf("Enter the time=");
	int t=input();
	int re=interest(p,r,t);
	printf("Interest =%d\n",re);
	return 0;
}	
