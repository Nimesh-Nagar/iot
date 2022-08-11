#include<stdio.h>

int main(){
	int a = 260;
	int b = 2;

//	float res = (char)a/b;  ->4/2 =2 beacuse signed char circular movement
	//float res = (char *)a + b;
//	char res = (int *)a + b; 268 12
	int res = (int *)a + b;
	printf("%d\n",res);


	//Void
//	void x; // Not possible
	void *x = &b;
	printf("Value of x : %x \n",x);
	printf("Value of *x : %d\n",*(char*)x);
	return 0;
}
