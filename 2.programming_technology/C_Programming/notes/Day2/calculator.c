#include<stdio.h>

int main(){
	//1.Take input from user
	//2.Perform some calculation
	//3.Print on the terminal
	int a;
	int b;

	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);

	int c = a + b;
	
	printf("Summation of %d and %d is %d\n",a,b,c);
	printf("Modulas  : \t %d % %d = %d\n",a,b , a%b);

	return 0;
}
