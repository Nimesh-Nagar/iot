// Q3. WAP for Addition, Subtraction, Multiplication of two matrices

#include<stdio.h>

	
void addition(int a1[3][3], int a2[3][3])
{	
	int add[3][3];
	printf("Addition of  Matrix \n");
		for(int arow=0; arow<3; arow++)
		{
			for(int acol=0; acol<3; acol++)
			{
				add[arow][acol] = a1[arow][acol] + a2[arow][acol];				
			}	
		}
		
		for(int arow=0; arow<3; arow++)
		{
			for(int acol=0; acol<3; acol++)
			{
				printf("%d ",add[arow][acol]);
			}
			printf("\n");	
		}
	
}

void subtraction(int a1[3][3], int a2[3][3])
{	
	int sub[3][3];
	printf("Subtraction of  Matrix \n");
		for(int arow=0; arow<3; arow++)
		{
			for(int acol=0; acol<3; acol++)
			{
				sub[arow][acol] = a1[arow][acol] - a2[arow][acol];
				
			}	
		}
		for(int arow=0; arow<3; arow++)
		{
			for(int acol=0; acol<3; acol++)
			{
				printf("%d ",sub[arow][acol]);
			}
			printf("\n");	
		}
					
}

void multiplication(int a1[3][3], int a2[3][3])
{	
	int mul[3][3];
	printf("Multiplication of  Matrix \n");
		for(int arow=0; arow<3; arow++)
		{
			for(int acol=0; acol<3; acol++)
			{	
				int sum = 0 ;
				for(int m=0;m<3;m++)
				{
				sum = sum + a1[arow][m] * a2[m][acol];
				}
				mul[arow][acol]= sum;
			}
		}
		for(int arow=0; arow<3; arow++)
		{
			for(int acol=0; acol<3; acol++)
			{
				printf("%d ",mul[arow][acol]);
			}
			printf("\n");	
		}
		
}
	

int main()
{
	int a1[3][3], a2[3][3], add[3][3], sub[3][3], mul[3][3];
	int arow, acol, brow, bcol;

	printf("Enter elements for 1st Matrix \n");
	for(arow=0; arow<3; arow++)
	{
		for(acol=0; acol<3; acol++)
		{
			printf("Row[%d] and Col[%d] =",arow,acol);
			scanf("%d",&a1[arow][acol]);
		}	
	}
	
	printf("Enter elements for 2nd Matrix \n");
	for(brow=0; brow<3; brow++)
	{
		for(bcol=0; bcol<3; bcol++)
		{
			printf("Row[%d] and Col[%d] =",brow,bcol);
			scanf("%d",&a2[brow][bcol]);
		}	
	}

	addition(a1,a2);
	subtraction(a1,a2);
	multiplication(a1,a2);
	
			 
	
	return 0;
}
