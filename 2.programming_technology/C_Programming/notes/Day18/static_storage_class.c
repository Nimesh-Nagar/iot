#include<stdio.h>

static int b ; // global static variable // on data segment

void process_data(){
	/*printf("Value of a = %d\n",a); // cannot access local static variable outside of function
	printf("Address of a = %x\n",&a);
	printf("Size of a = %d\n",sizeof(a));*/
	
	printf("Value of b = %d\n",b);
	printf("Address of b = %x\n",&b);
	printf("Size of b = %d\n",sizeof(b));
}


void process(){
	//save value accross function call
//	int x = 10;//on stack
	int y;
	static int x = 10; // on data segment // local static variable
	x++;
	printf("Value of x %d y = %d \n",x,y)	; 
	x = y;
}

int main(){
	static int a = 10; // local static variable // on Data segment
/*	printf("Value of a = %d\n",a);
	printf("Address of a = %x\n",&a);
	printf("Size of a = %d\n",sizeof(a));
*/
//	process_data();
	process();//11
	process();//11
	process();//11
	return 0;
}


