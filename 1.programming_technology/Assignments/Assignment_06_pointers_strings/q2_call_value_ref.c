//Q2. Write a function to swap two variables using Pass by value, Pass by reference

#include<stdio.h>

void swap(int x, int y)	// Function for pass by value
{
	int temp = x;
	x = y;
	y = temp; 
	printf("After swaping \nA = %d \nB = %d\n",x,y);	

}

void swap_1(int *x, int *y)	// Function for Pass by reference
{
	int temp = *x;
	*x = *y;
	*y = temp;

}

int main()
{
	int a,b;
	printf("Enter values of A = ");	
	scanf("%d",&a);
	printf("Enter values of B = ");
	scanf("%d",&b);

	swap(a,b);		//pass by value function
	swap_1(&a,&b);
	printf("After swaping using pass by ref. \nA = %d \nB = %d",a,b);
	
	

	return 0;
}
