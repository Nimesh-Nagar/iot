//Q4. WAP for Transpose of a matrix

#include<stdio.h>

int main()
{
// taking input from User  
	int a1[3][3];
	
	printf("Enter elements for Matrix \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&a1[i][j]);
		}	
	}
	
//Printing matrix 	
	printf("Matrix A = \n");
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
				
			printf("%d ",a1[i][j]);	
		}
		printf("\n");
	
	}
	
// Traspose of matrix logic	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int temp =0;
			if (i < j)
			{
				temp = a1[i][j];
				a1[i][j] = a1[j][i];
				a1[j][i] = temp;
				
			}
		}
	
	}
	
// Final Output Traspose of Matrix :	
	printf("Transpose of matrix A = \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		printf("%d ", a1[i][j]);
		}
		printf("\n");
	}	

	return 0;
}




