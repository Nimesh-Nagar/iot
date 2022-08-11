// arithmetic calculator

#include<stdio.h>

int main()
{
	int num1,num2,x;
	int add,sub,mul;
	float div;

	printf("\nChoose any one operation: \n1=add, 2=sub, 3=mul, 4=div : ");
	scanf("%d",&x);
			
	printf("\nEnter 1st Number = ");
	scanf("%d",&num1);
	printf("\nEnter 2nd Number = ");
	scanf("%d",&num2);

	if(x == 1){
		add = num1+num2;
		printf("Addition of num1 and num2 is %d ",add);
		}
	else if(x == 2){
		sub = num1 - num2;
		printf("Subtration of num1 and num2 is %d ",sub);
		} 
	else if(x == 3){
		mul = num1 * num2;
		printf("Multiplication of num1 and num2 is %d ",mul);
		} 
	else if(x == 4){
		div = num1 / num2;
		printf("divison of num1 and num2 is %f ",div);
		} 
	else
		{
			printf("choose valid option");	
		}

	return 0;
}
