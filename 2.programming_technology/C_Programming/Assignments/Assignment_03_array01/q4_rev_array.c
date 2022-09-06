// Q4.Write a program to implement display and reverse display function for integer array element.

#include<stdio.h>

int arr[5];	// global declaration

void input(){
	
	for(int i=0;i<5;i++){
		printf("Enter values of array = ");
		scanf("%d",&arr[i]);
	}
	
}

void rev(){
	
	printf("\nReversed array = ");
	for(int i=5-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
	
}	
	
int main(){
	int a,b;
	input();
	
	rev();
		
	return 0;
}	
