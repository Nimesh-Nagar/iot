#include<stdio.h>
 
void pat(int n)
 {
 	for(int i = 1; i <= n; i++)
 	{
 		for(int j = 1; j <= i ; j++)
 		{
 			printf("%d",i);
 		}
 		printf("\n");
 	}
 }
 
 int main()
 {
 	int n;
 	printf("Enter number of lines to print: ");
 	scanf("%d",&n);
 	pat(n);
 	
 	return 0;
 }
