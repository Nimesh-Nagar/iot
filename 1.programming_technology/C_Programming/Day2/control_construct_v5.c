#include<stdio.h>


int main(){
	int a;
	int b;
	int c;

	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter Second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);


	if( a > b && a > c){ // 0 is false and other values are true
		printf("%d is greater\n",a)
	}
	return 0;
}
