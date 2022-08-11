#include<stdio.h>
#include"calc.h"

int add(int a,int b){
	
	return a + b;
}

int main(){
		
	int (*fun)(int,int);
	fun = &add;
	int res = fun(10,20);
	
	printf("Result = %d\n",res);
	return 0;
}
