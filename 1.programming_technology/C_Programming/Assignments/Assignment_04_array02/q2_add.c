//Q2. WAP to Addition of two arrays

#include<stdio.h>

int main(){
	int arr1[5], arr2[5], add[5];

	printf(" Enter 5 Values of Array 1 = ");
	
	for(int i=0;i<5;i++){
		scanf("%d",&arr1[i]);
		}
	
	printf(" Enter 5 Values of Array 2 = ");
	
	for(int i=0; i<5; i++){
		scanf("%d",&arr2[i]);
		}
	
	//Addition of arrays
	for (int i=0; i<5; i++)
		{
			add[i] = arr1[i] + arr2[i];
		}
	
	printf("Sum of two array elements are:\n");

    	for (int i=0; i<5; i++)
    	{
        	printf("%d\n", add[i]);	
		}
	
	return 0;
	
}
	
	
	



