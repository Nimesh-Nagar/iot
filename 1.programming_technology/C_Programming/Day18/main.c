#include<stdio.h>
#include"lib.c"

extern int data ; //Dont declare data variable its already declared //
//extern int data = 198712; cannot redefine
extern int s;
void process(){
	printf("Value of data = %d \n",data); //accessible
	printf("Value of s = %d \n",s);
}

int main(){
//	extern int data; // data segment // global
	data = 20000;
	print_data();
	printf("________________________________");
	printf("Value of data = %d \n",data);
	printf("Address of data = %x \n",&data);
	printf("Sizeof of data = %d \n",sizeof(data));
	printf("________________________________");
	process();
	return 0;
}
