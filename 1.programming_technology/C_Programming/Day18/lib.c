#include<stdio.h>

static int data = 100;//data segment

void print_data(){
	int d = 100; // local variable no extern for local variable
	static int s = 24908;
	printf("Value of data = %d \n",data);
	printf("Address of data = %x \n",&data);
	printf("Sizeof of data = %d \n",sizeof(data));

}
