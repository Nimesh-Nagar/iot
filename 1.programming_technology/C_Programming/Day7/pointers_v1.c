#include<stdio.h>


int main(){
	int* x; //Declaration:8 Bytes:Stack:Local variable
	int a = 874365;
	
/*	int *y;
	y = &x;
	x = &a
	*x
	*y
	x
	
	int *z;
	z = &y;
	*z
*/
	char *ch;
	ch = &a;
	printf("Data of a is %x\n",a);
	printf("Address of a is %x\n",&a);
	printf("Data in ch : %x\n",ch);
	printf("Data pointed by address in ch is : %x\n",*ch);
	short *sh;
	sh = &a;
	printf("Data in sh : %x\n",sh);
	printf("Data pointed by address in sh is : %x\n",*sh);
	
	return 0;
}
