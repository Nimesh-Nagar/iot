/*Q1.  String 
evaluate following expressions
*p++, *++p, (*p)++, ++(*p), ++*p, *(p++), *(++p)
*q--, *--q, --(*q), --*q,
(*q)--, *(q--), *(--q)
*/

#include <stdio.h>

int main()
{
	int a[5] = {10, 20, 30, 40, 50 };
	int *p=a, *q=*(&a+1) - 1;
	
	
/*	printf(" %d \n",p);
	printf(" *p : %d \n",*p);
	printf(" %d \n",q);
	printf(" *q : %d \n",*q);
*/	
	printf(" %d \n",*p++);
	printf(" %d \n",*++p);	
	printf(" %d \n",(*p)++);
	printf(" %d \n",++(*p));
	
	printf(" %d \n",++*p);
	printf(" %d \n",*(p++));
	printf(" %d \n",*(++p));
	
/*	printf(" %d \n",*q--);
	printf(" %d \n",*--q);
	printf(" %d \n",--(*q));
	printf(" %d \n",--*q);
	
	printf(" %d \n",(*q)--);
	printf(" %d \n",*(q));
	printf(" %d \n",*(--q));
*/
    return 0;
}
