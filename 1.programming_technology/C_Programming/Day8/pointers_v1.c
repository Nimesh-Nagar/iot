#include<stdio.h>

void swap(int a,int b){
	int temp = a;
	a = b;
	b = temp;
}

void swap_pt(int *x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int a,b;
	a = 10;
	b = 20
/*	swap(a,b)	
	a
	b*/
	swap_pt(&a,&b);
	a
	b
	return 0 ;
}



