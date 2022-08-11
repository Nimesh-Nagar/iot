// pattern 

#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of lines to print = ");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<i+1;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
