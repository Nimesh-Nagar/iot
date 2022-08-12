// Q12. Implement a C program to check given no. is armstrong or not ( eg 153 is armstrong number ( 153=1^3+5^3+3^3 ) )

#include<stdio.h>

int main()
{
	int num,a,rem,sum=0;
	printf("\nEnter the number:");
	scanf("%d",&num);
	
	a=num;
	while(a != 0)
	{
		rem = a%10;
		sum = sum+(rem*rem*rem);
		a = a/10;
	}
	if(sum==num)
	{
		printf("Number is Armstrong");
	}
	else{
		printf("Number is not Armstrong");	
	}

	return 0;
}
