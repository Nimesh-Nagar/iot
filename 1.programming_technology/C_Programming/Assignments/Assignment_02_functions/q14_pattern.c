#include<stdio.h>
int main()
{
	int n;
	printf("Enter Value n=");
	scanf("%d",&n);
	
	for(int i = 1; i < n; i++)
	{
		for(int j = 1; j <= n - i; j++)
		{
			printf("1");
		}
		for(int k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		for(int l = 1; l <= n - i; l++)
		{
			printf("1");
		}
	 	printf("\n");
	}
	return 0;
}
