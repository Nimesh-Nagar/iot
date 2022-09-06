//Q1. WAP to Reverse an array in memory(Dont creates new array variable store in same array)


#include<stdio.h>

void input(int a[],int n)
{
	for(int i=0;i<n;i++)
		{
			printf("elemets of array : ");
			scanf("%d",&a[i]);
		}
	printf("\n");
}

// Function for Reversing the array
	
void reverse(int a[], int start, int end)
{	
	int temp;
	while(start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	} 
}


int main()
{
	int a[5],i;

	int n = sizeof(a)/sizeof(a[0]);
	input(a,n);
	reverse(a,0,4);
	printf("Reverse array is %d\n",a[i]);
	
	
	return 0;
}	
