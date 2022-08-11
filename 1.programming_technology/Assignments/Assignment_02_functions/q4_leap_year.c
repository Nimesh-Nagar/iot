// Verify given year is a leap year or not

#include<stdio.h>

int enter_year()
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	return year;
}

void leap_year(int year)
{	
	
	if((year%4 == 0) && (year%400 == 0) || (year%100 != 0))
		{
			printf("\n %d is a Leap Year ",year);
		}
	else{
		printf("\n %d is not a Leap year",year);
	}
	
}



int main()
{
	int a = enter_year();	// calling enter_year function.
	leap_year(a); // calling leap_year function.
	
	
	return 0;
}
