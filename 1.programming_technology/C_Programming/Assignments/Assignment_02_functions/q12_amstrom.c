#include<stdio.h>
int input()
{
	int num;
	printf("Enter Number to check=");
	scanf("%d",&num);
	return num;
}

int armstrong(int num)
{
	int sum=0, rem,temp=num;
	while(num != 0)
	{	rem = num % 10;//gives remainder
		sum = sum + (rem*rem*rem);
		num = num / 10;//gives division
	}
	if(temp == sum)
		{
			printf("Number is Armstrong Number\n");
		}
	else	{
			printf("Number is not Armstrong number\n");
		}	
}
int main()
{
	int num = input();
	armstrong(num);
	return 0;
}
