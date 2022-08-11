#include<stdio.h>

int input()
{
	int n;
	printf("Enter number=");
	scanf("%d",&n);
	return n;
}
int perfect(int n)
{	
	int sum = 0; 
	for(int i = 1;i <= n; i++)
	{
		if(n % i == 0)
		{
			sum = sum + i;	
		} 	
	}
		sum = sum / 2;
		if(sum == n)
		{
			printf("%d is a perefect number\n",n);
		}
		else
		{
			printf("%d is not a perfect number\n",n);
		}
}
int main()
{
	int n = input();
	perfect(n);
	return 0;
}
