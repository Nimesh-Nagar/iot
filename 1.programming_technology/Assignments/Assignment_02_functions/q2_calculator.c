// arithmetic calculator

#include<stdio.h>

int cal(int num1, int num2, int x)
{
	
	int result;
	if(x == 1){
		result = num1+num2;
		printf("Addition of num1 and num2 is %d ",result);
		}
	else if(x == 2){
		result = num1 - num2;
		printf("Subtration of num1 and num2 is %d ",result);
		} 
	else if(x == 3){
		result = num1 * num2;
		printf("Multiplication of num1 and num2 is %d ",result);
		} 
	else if(x == 4){
		result = num1 / num2;
		printf("divison of num1 and num2 is %d ",result);
		} 
	else
		{
			printf("choose valid option");	
		}

	return result;
}

	
int main()	
{	
	int num1,num2,x;
	
	printf("\nChoose any one operation: \n1=add, 2=sub, 3=mul, 4=div : ");
	scanf("%d",&x);
	
	printf("\nEnter 1st Number = ");
	scanf("%d",&num1);
	
	printf("\nEnter 2nd Number = ");
	scanf("%d",&num2);
	
	int result = cal(num1,num2,x);
	printf("Result = %d",result);
	
	return 0;
}
