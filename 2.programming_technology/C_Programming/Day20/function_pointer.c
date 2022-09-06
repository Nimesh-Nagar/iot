#include<stdio.h>
#include"calc.h"

int main(){
		
	//int (*fun)(void*,int,int) = &function;
	int res = function(add,10,20);
	res = function(sub,10,20)
	printf("Result = %d\n",res);
	return 0;
}
