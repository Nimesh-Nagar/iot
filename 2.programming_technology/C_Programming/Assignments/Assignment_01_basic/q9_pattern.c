#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of line to print : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=(2*i)-1;j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
