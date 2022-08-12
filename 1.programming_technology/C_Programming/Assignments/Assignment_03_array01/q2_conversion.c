//2. Implement a C program for number conversions (decimal, binary, octal, hexadecimal).

#include<stdio.h>

void conversion(int num, int base)
{
	int rem=num%base;
	if(num == 0)
	{
		return;
	}
	conversion(num/base,base);		//conversion formula
	if(rem<10)
	{
		printf("%d",rem);	
	}
		else
		{
			printf("%c",rem-10+'A');	
		}
}

	
int main()
{
	int choice, num;
	printf("Enter decimal no. = ");
	scanf("%d",&num);	
	
	printf("\n[1].Binary conversion = ");
	conversion(num,2);
	printf("\n[2].Octal conversion = ");
	conversion(num,8);
	printf("\n[3].Hexa conversion = ");
	conversion(num,16);
	
	return 0;
}


