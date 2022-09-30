#include<stdio.h>

//register int x = 100;


int main(){
	//We dont need to mention auto
	auto int a = 10; //local variable // stack //scope only function //lifetime function
	printf("Value of a = %d\n",a);
	printf("Address of a = %x\n",&a);
	printf("Size of a = %d\n",sizeof(a));
	printf("___________________________________________\n")	;
	register int b = 100;
	printf("Value of b = %d\n",b);
//	printf("Address of b = %x\n",&b); // Cannot print compile time error
	printf("Size of b = %d\n",sizeof(b));
	struct Student{ int a; int b;int c;};
	register struct Student s1;
	printf("Value of s1 = %d\n",s1.a);
//	printf("Address of s1 = %x\n",&s1); // Cannot print compile time error
	printf("Size of s1 = %d\n",sizeof(s1));
	
	register int arr[100];
	arr[0] = 100;
//	printf("Value of &arr = %d\n",&arr);
	return 0;
}
