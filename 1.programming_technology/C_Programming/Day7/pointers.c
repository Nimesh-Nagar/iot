#include<stdio.h>


int main(){
	int* x; //Declaration:8 Bytes:Stack:Local variable
	int a = 230;
	printf("Address of a = %x\n",&a);
	x = &a; //Assigning the address of a to x
	printf("Data in x = %x\n",x);
	printf("Data at address %x stored in x is %d \n",x,*x);
	return 0;
}
