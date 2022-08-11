//Q1. WAP for Checking whether given matrix is identity or not?

#include<stdio.h>

void main()
{
	int arr[3][3],row,col,flag = 1;
	printf("Create matrix\n");
	for(row=0;row<3;row++)
	{
		printf("\n");
		for(col=0;col<3;col++)
		{ 
			scanf("%d\n",&arr[row][col]);
		}
	}
	
	printf("The matrix is\n");
	for(row=0;row<3;row++)
	{	
		for(col=0;col<3;col++)
		{ 
			printf("\t%d",arr[row][col]);
		}
	}
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)	
		{
			if(row == col && arr[row][col] == 1  || row != col && arr[row][col] == 0 )
			{
				flag = 1;
				break;
			}
				else{
					flag=0;
				}
		}
	}
	if(flag == 1)
	{
		printf("\nThis is identity matrix");	
	}
		else if(flag==0)
		{
			printf("\nThis is not a identity matrix");
		}
	
}

