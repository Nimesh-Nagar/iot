//Q4. Write a function to swap two variables Pass by reference (Allocate memory on heap)
#include<stdio.h>
#include<stdlib.h>

void swap(int *a ,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter Value of b=");
	scanf("%d",&b);
	
	int *x = malloc(sizeof(a));
	int *y = malloc(sizeof(b));
	
	printf("Before swap a=%d, b=%d\n",a,b);
	swap(&a,&b);
	
	printf("After swap a=%d, b=%d\n",a,b);
	return 0;
}
