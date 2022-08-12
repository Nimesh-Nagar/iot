//Q2. WAP to calculate the Determinant of 2x2 matrix

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[2][2];
	printf("Enter matrix element");
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<2;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	printf("\nMatrix is\n");
	
	for(int row=0;row<2;row++)
	{
		printf("\n");
		for(int col=0;col<2;col++)
		{
			printf("%d",a[row][col]);
		}
	}
	int d1 = a[0][0] * a[1][1]; 
	int d2 = a[0][1] * a[1][0];
	int d = d1 - d2;
	int deter = abs(d);
	printf("\nDeterminent of matrix is = %d",deter);
	return 0;
}



