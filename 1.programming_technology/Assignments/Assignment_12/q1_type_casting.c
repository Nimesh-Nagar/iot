
//Q1. WAP to Convert from one type of pointer/address to other using void*

#include<stdio.h>
int main(){ 
	int a = 3;
	float b = 6.2500;
	char c = 'k';
	
	void* ptr;
	
	ptr=&a;
	printf("value of a is %d\n", *((int*)ptr*2));
        
	ptr=&b;
	printf("value of b is %0.4f\n", *((float*)ptr));
	
	ptr=&c;
	printf("value of c is %c\n", *((char*)ptr));

	return 0;
}



