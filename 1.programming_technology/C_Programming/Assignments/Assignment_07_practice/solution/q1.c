//Write a program to calculate the area and circumference of circle.

#include<stdio.h>
float r;
float a;
float c;
float input()
{
	printf("Enter the radius of circle=");
	scanf("%f",&r);
	return r;
}
float area()
{
	a=3.14*r*r;
	return a;          
}
float circumference()
{
	c=2*3.14*r;
	return c;          
}	
int main()
{
	input();
	area();
	printf("Area of circle=%f\n",a);
	circumference();
	printf("circumference of circle=%f",c);
	return 0;
}	
