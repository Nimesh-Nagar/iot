
#include<stdio.h>
int input()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	return n;	
}

int pat(int n)
{

	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j <= n - 1; j++)
		{
			printf(" ");	
		}
		for(int k = i; k <= 2*i-1; k++)
		{
			printf("%d",i);
		}
		for(int l=1; l <= i-1; l++)
		{
			printf("%d",i);
		}
		printf("\n");
	}	
}

int main()
{
	int m = input();
	pat(m);
	return 0;
}
