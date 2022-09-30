#include<stdio.h>

int main(){
	struct Student{
		int a;
		int c;
//		short d;		
//		long long int e;
		char b;
		char e;
		long long int d;
	};
	struct Student s1;
	printf("sizeof Student = %d\n",sizeof(struct Student));
	printf("Address of a = %u\n",&s1.a);
	printf("Address of a = %u\n",&s1.c);
//	printf("Address of a = %u\n",&s1.d);
	printf("Address of a = %u\n",&s1.b);
	printf("Address of a = %u\n",&s1.e);	
	return 0;
}
