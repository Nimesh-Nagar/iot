// Area of cirlce
#include<stdio.h>

float area(float rad){
	float a = 3.14 * rad * rad;
	return a;	
}

float cirumference(ind rad){
`	

}



int main()
{
	float rad;
	printf("Enter radius: ");
	scanf("%f",&rad);
	float a = area(rad);
	printf("Area of Circle: %.2f \n",a);
	
	return 0;
}
