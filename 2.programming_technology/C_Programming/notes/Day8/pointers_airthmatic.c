#include<stdio.h>



int main(){
	int a = 10;
	int *x = &a;
	printf("Address of a %x\n",&a);
	printf("Data in x =  %x\n",x);
	x++;
	printf("Address of a %x\n",&a);
	printf("Data in x =  %x\n",x);


	char *ch = 1000;
	printf("Data in ch =  %u\n",ch);
	ch++;
	printf("Data in ch =  %u\n",ch);
	
	int *b = 1001;
	printf("Data in a =  %u\n",b);
	b++;
	printf("Data in a =  %u\n",b);
	b = b + 10;
	printf("Data in a =  %u\n",b);
	
	b = 1000;
	b  = b*5;
	printf("Data in b after multiplication =  %u\n",b);
	return 0;
}
