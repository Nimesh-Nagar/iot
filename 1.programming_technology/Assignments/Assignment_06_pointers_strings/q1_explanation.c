/*Q1. Given int a[5] = {10, 20, 30, 40, 50 }; 
int *p=a, *q=*(&a+1) - 1;
evaluate following expressions
*p++, *++p, 	(*p)++, ++(*p), 	++*p, 	*(p++), *(++p)

*q--, *--q, 	--(*q), --*q,

(*q)--, *(q--),		 *(--q)*/

#include<stdio.h>

int main()
{	
	int a[5] = {10, 20, 30, 40, 50};
	int *p = a;
	
	int *q = *(&a+1) - 1;//*(1000+4x5bytes)
		     //*(1020) - 1
		     // 1020-4bytes = 1016th location value i.e. 50 as data type is int type so after derefrencing it will process 4bytes each
		     //therefore *q = 
	//*1000+4bbytes= *1004 = 20
	printf("*p=%d *q=%d &p=%d  &q=%d\n",*p,*q,&p,&q);
	//	*p=10 *q=50 &p=2320 &q=2328
	*p++;
	printf("*p=%d *q=%d &p=%d  &q=%d\n",*p,*q,&p,&q);
	//	*p=20 *q=50 &p=2320 &q=2328
	
	*++p;
	printf("*p=%d *q=%d &p=%d  &q=%d\n",*p,*q,&p,&q);
	//	*p=30 *q=50 &p=2320 &q=2328
	
	(*p)++;	
	printf("*p=%d *q=%d &p=%d  &q=%d\n",*p,*q,&p,&q);
	//	*p=31 *q=50 &p=2320 &q=2328
	
	++(*p);
	printf("*p=%d *q=%d &p=%d  &q=%d\n",*p,*q,&p,&q);
	//	*p=32 *q=50 &p=2320 &q=2328
	
	++*p;
	printf("*p=%d *q=%d &p=%d  &q=%d\n",*p,*q,&p,&q);
	//	*p=33 *q=50 &p=2320 &q=2328
	
	*(p++);
	printf("*p=%d *q=%d &p=%d  &q=%d\n",*p,*q,&p,&q);
	//	*p=40 *q=50 &p=2320 &q=2328
	
	*(++p);
	printf("*p=%d *q=%d &p=%d  &q=%d\n",*p,*q,&p,&q);
	//	*p=50 *q=50 &p=2320 &q=2328
	
	printf("***Output For Operations on Q Vriable***\n");
	*q--;
	printf("*q=%d &q=%d\n",*q,&q);
	//	*q=40 &q=3656
	
	*--q;
	printf("*q=%d &q=%d\n",*q,&q);
	//	*q=33 &q=3656
	
	--(*q);
	printf("*q=%d &q=%d\n",*q,&q);
	//	*q=32 &q=3656
	
	--*q;
	printf("*q=%d &q=%d\n",*q,&q);
	//	*q=31 &q=3656
	
	(*q)--;
	printf("*q=%d &q=%d\n",*q,&q);
	//	*q=30 &q=3656
	
	*(q--);
	printf("*q=%d &q=%d\n",*q,&q);
	//	*q=20 &q=3656
	
	*(--q);
	printf("*q=%d &q=%d\n",*q,&q);
	//	*q=10 &q=3656
	
	return 0;
}
