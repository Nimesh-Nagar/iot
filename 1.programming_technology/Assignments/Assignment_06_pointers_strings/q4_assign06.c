/* Q4. Whats wrong in this code, any fixes to the problem?
int* test(int x)
{
int y=x*x;
return &y;
}  */


#include<stdio.h>

int test(int x)
{
	
	int y = x * x;
	return y;	// y is local variable so no need to return it
	
}

int main()
{
	int a = test(5);
	printf("Answer = %d ",a);
	

	return 0;
}
