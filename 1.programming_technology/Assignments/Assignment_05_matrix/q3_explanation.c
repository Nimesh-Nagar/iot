/*
Q3. Differentiate between
const int * p;
int const * p
int * const p = &x;
const int * const p = &x;
*p=20, p++, (*p)++, p=&y
*/

#include<stdio.h>

int main()
{
	//const int *p;//*p is pointing to a location which may or may not be constant but pointer variable is not constant
	//int y = 10;
	//p = &y;
	//*p = 20;
	//*p = 20;//read only error as ptr is const variable.
	//p++;//p++ =4 didnt get how we got the value
	//(*p)++;////read only error as ptr is const variable.
	//p = &y;//Garbage value will be printed
	//printf("p=%d\n",p);
	
	//int const * p;//*p is pointing to a location which may or may not be constant but pointer variable is not constant
	//int y;
	//*p = 20;//read only error as ptr is const variable.
	//p++;//p++ =4 didnt get how we got the value
	//(*p)++;////read only error as ptr is const variable.
	//p = &y;//Garbage value will be printed
	//printf("p=%d\n",&y);
	
	//int x;
	//int * const p = &x;//variable is not consatant but pointer is constant i.e. address which pointer varible is storing cannot be changed
	//int y;
	//*p = 20;
	//printf("*p=%d x=%d\n",*p,x);//20 20
	//p++;//read only error for variable p
	//(*p)++;////garbage and address of x
	//p = &y;//read only error for p
	//printf("p=%d %d\n",p,x);
	
	int x;
	const int * const p = &x;
	int y;
	//*p = 20;//.
	//printf("*p=%d x=%d\n",*p,x);//20 20
	//p++;//p++ =4 didnt get how we got the value
	//(*p)++;////read only error as ptr is const variable.
	p = &y;//Garbage value will be printed
	printf("p=%d %d\n",p,y);
	
	
	
	return 0;	 
}	
