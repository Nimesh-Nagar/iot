//Q2. WAP to Test arithmetic operation on void pointers

#include<stdio.h>

int main(){ 
	int a= 3;
	float b=6.2500;
	
	void* ptr;
	void* ptr1;
	
	ptr=&a;
	printf("value of a is %d\n", *((int*)ptr));
    
    ptr1=&b;
    printf("value of b is %0.4f\n", *((float*)ptr1) );
    
    printf("Addition of ptr + ptr1 is : %f\n", *((int*)ptr) + *((float*)ptr1));
    printf(" Divide  of ptr/ ptr1 is : %f\n", *((int*)ptr) / *((float*)ptr1));
    printf(" multiply  of ptr * ptr1 is : %f\n", *((int*)ptr) * *((float*)ptr1));
	
	return 0;
}
