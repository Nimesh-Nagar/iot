// Q13. Implement a C program to check given no. is perfect no. or not (eg 6, 28, 496, 8128 ( perfect no is equal to half the sum of all its positive divisors for 6 it is (1+2+3+6) / 2 is 6)

#include<stdio.h>

int main()
{
	int n, sum=0;
	printf("Enter the number=");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			sum = sum + i;
		} 	
		
	}		
		sum = sum / 2;	
		if(sum == n)
		{
			printf("%d is a perfect number\n",n);	
		}
		else
		{
			printf("%d is not a perfect number\n",n);
		}
	return 0;
	
}
	
