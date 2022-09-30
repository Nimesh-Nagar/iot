#include<stdio.h>
#include <stdlib.h>

int* square(int* x){
	int *y = malloc(sizeof(int));
//	printf("Square %d\n",(*x) * (*x));
	(*y) = (*x) * (*x);
	return y;
}


int main(){
	//Dynamic Memory Allocation
	//Heap

	//malloc : Simply allocates a single block of memory
	//calloc : Allocates block of memory and block contains multiple memory
	//realloc : Reallocate memory
	//free : free the memory
	int *x = malloc(sizeof(int));
	printf("Enter int data:");
	scanf("%d",x);
	int* a= square(x);
	printf("Data : %d\n",*x);
	printf("Square %d\n",*a);
	free(x);
	return 0;
}
