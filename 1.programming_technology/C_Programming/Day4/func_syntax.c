#include<stdio.h>


int sum(int a, int b){
	int c = a + b;
	return c;
}


void table(int a){ // without any return
	for(int i = 0 ;i < 10 ; i++){
		printf("%d\n",a*i);
	}
}



int main(){
	int y = sum(10,20);
	printf("Sum is %d\n",y);
	table(2);
	return 0;
}
