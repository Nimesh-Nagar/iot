//Q2.2.Write a program to convert Fahrenheit to celcius.
#include<stdio.h>

float fahren_degree(float fahrenheit)
{
	fahrenheit = (fahrenheit - 32) * 5/9 ;
	return fahrenheit;
}


int main()
{
	float fahrenheit, celcius;
	
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	fahren_degree(fahrenheit);
	printf("Temp in Degree Celcius : ",fahrenheit);

	return 0;
	
}
