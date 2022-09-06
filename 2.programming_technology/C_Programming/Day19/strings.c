#include<stdio.h>

int main(){
	char *str = "Siddhant";
	printf("Address of str = %x\n",str);
	char *x = "Siddhant";	
	printf("Address of x = %x\n",x);
	char *y = x;
	printf("Address of y = %x\n",y);
	x = "Sid";
	printf("Value of x = %s Address of x = %x\n",x,x);
	free(x);
	return 0;
}
