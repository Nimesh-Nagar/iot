#include<stdio.h>


float area(float rad){
	float a = 3.14 * rad * rad;
	return a;
}

float circumference(float rad){
	return 2 * 3.14 * rad;

}


int main(){
	float rad;
	float c;
	printf("Enter radius : \n");
	scanf("%f",&rad);
	float a = area(rad);
	printf("Area of circle : %f \n",a);
	c = circumference(rad);
	printf("Cricumference of circle : %f \n",c);

	return 0;
}
