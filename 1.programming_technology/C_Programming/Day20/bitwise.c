#include<stdio.h>

int main(){
	int num = 12;
	int x = 4;
	printf("num & x = %d\n", num & x);
	printf("num | x = %d\n", num | x);
	printf("num ^ x = %d\n", num ^ x);
	printf("num << 2 = %d\n", num<<2); // num*2^x -> num <<x 
	printf("num >> 2 = %d\n",num>>2); // num/2^x -> num >>x
	return 0;
}
