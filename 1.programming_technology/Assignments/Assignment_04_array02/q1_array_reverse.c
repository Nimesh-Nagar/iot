//Q1. WAP to Reverse an array in memory(Dont creates new array variable store in same array)

#include<stdio.h>
int main()

{
	int temp,arr[10];
	printf("Enter the array elements: ");

	for (int i=0;i<10;i++)			// input array elements
	{	
		scanf("%d",&arr[i]);	
	}
	
	printf("\nBefore reversing array : ");
	for (int i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
			
	}
	
		int i = 0,j = 9;
		while(i<j)			// Reversing the array logic
		{	
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
			i++;
			j--;
		}	
	
	printf ("\nAfter reversing the array : ");
	
	for(i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	printf("\n");	

return 0;

}
