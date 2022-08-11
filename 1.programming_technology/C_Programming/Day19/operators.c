#include<stdio.h>

int main(){
	int a = (10,20,30);
	printf("%d\n",a);
//	printf("Value = %d\n",a++ + ++a ); //10 + 12
	//printf("Value = %d\n", a++ + ++a + ++a);
	//printf("Value = %d  %d %d\n", a++, ++a , ++a);
//	++a++;

	int x =  -1 ? 100 : 300;
	printf("x = %d\n",x);
	return 0;
}
