// Q12. Implement a C program to check given no. is armstrong or not ( eg 153 is armstrong number ( 153=1^3+5^3+3^3 ) )

#include<stdio.h>
#include <math.h>

int count_digit(int num){
	int count = 0;
	int temp = num;
 
	while(temp!=0){
		temp = temp/10;
		count++ ;
	}
	return count; 
}

int main()
{
	int num ;

	printf("Enter the number to check Armstrong : ");
	scanf("%d",&num);

	int pwr = count_digit(num);
	printf("return fun %d\n",pwr);

	int arm = num;
	int sum = 0;

	while(arm!=0){
		int temp1 = arm % 10;
		// printf("%d",pwr);
		sum  = sum + pow(temp1, pwr);
		arm = arm/10;
	}

	if (sum == num ){
		printf("Number is Armstrom \n ");

	}else{
		printf("Not Armstrom \n");
	}

	return 0;
}
