/* Q3. Differentiate between
const int * p;
int const * p
int * const p = &x;
const int * const p = &x;
Try *p=20, p++, (*p)++, p=&y in each case */

#include<stdio.h>

int main()
{
	const int * p;
	int const * p;
	int * const p = &x;
	const int * const p = &x;	
	
	printf("pointer p = %d ",*p);
	Try *p=20;
	p++, (*p)++, p=&y
	
	return 0;

}
