//Write a program to convert Fahrenheit to celcius
#include<stdio.h>

float input()
{
	float fah;
	printf("Enter the temperature in fahrenheit=");
	scanf("%f",&fah);
	return fah;
}
float convert_f_c(float fah)
{
	return((fah-32)*5/9);

}

int main()
{
	float fah=input();
	float c=convert_f_c(fah);
	printf("Temperature in celcius=%f `C\n",c);
	return 0;
}	
