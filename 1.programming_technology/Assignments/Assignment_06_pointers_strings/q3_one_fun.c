// Q3. Write a single function to return sum, product of two no.s

#include<stdio.h>

void fun(int a, int b, int *c, int *d)
{
	*c = a+b;
	*d = a*b;
	
}

int main()
{
	int a, b, c, d;
	printf("Enter values of A and B = ");
	scanf("%d%d",&a,&b);
	
	fun(a,b,&c,&d);
	
	printf("Additon = %d",c);
	printf("\nProduct = %d",d);	
	
	return 0;
}
