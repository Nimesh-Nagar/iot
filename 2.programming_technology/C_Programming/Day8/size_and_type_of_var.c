#include<stdio.h>

int main(){
	int a = 10;
	int *x = &a;

	//sizeof operator
	printf("Size of a = %d\n",sizeof(a));
	printf("Size of x = %d\n",sizeof(x));
	return 0;
}
