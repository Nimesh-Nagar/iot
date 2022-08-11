/*Q3. Whats wrong in the following code, suggest a fix for this.
struct A
{
int x;
char *str; // (or) char str[20];
};
struct A a1 = { 101, “abc” } , a2;
a1.x=10;
a1.str=”hello”; //works?
scanf(“%d%s”,&a1.x,a1.str); //works?
a2 = a1; //shallow copy or deep copy?
What if str is declared as an array instead of pointer, i.e. charstr[20]*/
#include<stdio.h>

int main()
{
/*
	struct A
	{
		int x;
		char *str;
	};
	struct A a1 = {101, "abc"},a2;
	a1.x = 10;
	a1.str = "hello";
	printf("a1.x=%d\na1.str=%s\n",a1.x,a1.str);
	//a1.x=10, a1.str=hello
	
	//shallow copy deep copy
	printf("Enter a1.x and int  and a1.str as string=\n");
	//scanf("%d%s",&a1.x,a1.str);
	//it takes the input but when we try to print it gives segemetatuion fault core dumped
	//printf("a1.x=%d\na1.str=%s\n",a1.x,a1.str);
	
	a2 = a1;//shallow copy
	printf("a2=%d\n",a2);//a2=10
	
	//printf("*a1=%d\n*a2=%d\n",*a1.x,*a2.x);
	
	
	printf("&a1=%d\n&a2=%d\n",&a1,&a2);
	//&a1=2138675824  &a2=2138675840
	*/
/*What if str is declared as an array instead of pointer, i.e. charstr[20]*/	
		struct A
	{
		int x;
		char str[20];
	};
	struct A a1 = {101, "abc"},a2;
	a1.x = 10;
	//a1.str = "hello";//as we cannot assing value like this to array index
	printf("a1.x=%d\na1.str=%s\n",a1.x,a1.str);
	//a1.x=10, a1.str=abc as str is a char array 
	
	//shallow copy deep copy
	printf("Enter a1.x and int  and a1.str as string=\n");
	scanf("%d%s",&a1.x,a1.str);
	printf("a1.x=%d\na1.str=%s\n",a1.x,a1.str);
	//a1.x = 10(whatever we enter in scanf ) a1.str=hello(whatever input we provide will be printed)
	
	a2 = a1;
	printf("a2=%d\n",a2);//a2=1295364768 garbage value
	
	//printf("*a1=%d\n*a2=%d\n",*a1.x,*a2.x);
	
	
	printf("&a1=%d\n&a2=%d\n",&a1,&a2);
	//&a1=-638520848 &a2=-638520816


	
	return 0;
}
