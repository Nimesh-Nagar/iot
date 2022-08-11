//Q1. Implement a C program based on integer array. Implement method to find average, sum, min element, max element.

#include<stdio.h>

int arr[5];	// global declaration

void input(){
	for(int i=0;i<5;i++){
		printf("Enter values of array = ");
		scanf("%d",&arr[i]);
	}
	
}	

int add(){				// Addition of each elements:
	int sum=0;
	for(int i=0;i<5;i++){
		sum =sum + arr[i];
		 }
	printf("Sum is = %d\n",sum);
	return sum;
}


void avg(int sum){			// Average function

	float average = (float)sum/5;
	printf("Average is =%f\n",average);
	}

void minimum(){			// To find Minimum number function
	int min = arr[0];
	for(int i=1;i<5;i++){
		if(arr[i] < min){
			min = arr[i];
			}
		}	
	printf("minumun values is = %d\n",min);
}
 
void maximum(){ 		// To find Maximum number function
	int max = arr[0];
	for(int i=1;i<5;i++){
		if(arr[i] > max){
			max = arr[i];
			}
		}	
	printf("maximun values is = %d",max);
}

int main(){
	
	input();			// calling input fun
	int sum=add();			// calling addition fun.	
	avg(sum);			// calling average fun.
	minimum();
	maximum();	
	
	return 0;
}
