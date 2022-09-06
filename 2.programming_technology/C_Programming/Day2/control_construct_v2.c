#include<stdio.h>


int main(){
	int a;
	int b;

	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter Second number : ");
	scanf("%d",&b);

	if( a > b){ // 0 is false and other values are true
		printf("%d IS GREATER\n",a);
	}
	else{
		printf("%d is greater\n",b)
	}

	return 0;
}
