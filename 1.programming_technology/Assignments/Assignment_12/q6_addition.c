Q6. WAP to Addition of two arrays(Allocate on heap)


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a, *b; 
	int c[5];
	
	a = (int*)calloc(5, sizeof(int));	// allocates block of memory;
	b = (int*)calloc(5, sizeof(int));	
	
	printf("Enter values for a array\n");		//accepting input for array a
		for(int i=0; i<5; i++)
		{
			scanf("%d",(a+i));
		}
		
	printf("Enter values for b array\n");		//accepting input for array b
		for(int j=0; j<5; j++)
		{
			scanf("%d",(b+j));
		}
		
		for(int i=0; i<5; i++)		// Addition of two arrays
		{
			c[i] = a[i]+b[i];
		}
		
	printf("Addition of a and b \n");	//After addition of array A and B Ouput
		for(int k=0; k<5; k++)
		{
			printf("%d\t",c[k]);
		}
			
		return 0;
}		
		
		
		
		
		
		
		

