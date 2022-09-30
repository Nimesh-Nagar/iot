#include<stdio.h>

int main(){
	int const  a = 65;
	printf("Value of a %d \n",a);
//	a = 100; cannot change
	printf("Value of a %c \n",(char)a);
	printf("_______________________________\n");


	int x = 100;
	const int *pt = &x;
	printf("Value of x %d \n",x);
	printf("Value of pt %d \n",pt);
//	*pt = 12312;	//Not possible Dereference is constant
	pt= 7123863;
	printf("Value of x %d \n",x);
	printf("Value of pt %d \n",pt);

	/*printf("_______________________________\n");
	int * const p = &x;
	printf("Value of x %d \n",x);
	printf("Value of p %d \n",p);
	*p = 12312;	
	//p= 7123863; not possible beacuse p memory is constant
	printf("Value of x %d \n",x);
	printf("Value of p %d \n",p);
*/
	printf("_______________________________\n");
	int const *p = &x;
	printf("Value of x %d \n",x);
	printf("Value of p %d \n",p);
	//*p = 12312;	not possible  Dereference is constant
//	p = 7123863;
	printf("Value of x %d \n",x);
	printf("Value of p %d \n",p);
	printf("Value of p %x \n",(float *)p);
	printf("Value of p %f \n",*(float *)p);

	const int* const ptx = &x;


	return 0;
}
