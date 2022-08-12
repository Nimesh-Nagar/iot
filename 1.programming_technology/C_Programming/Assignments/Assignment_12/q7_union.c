//Q7. Try the following code

#include<stdio.h>
int main()
{
	union A
	{
		int x;
		int y;
		char ch;
	};
	union A a1;
	printf("size of a1 --> %d\n",sizeof(a1));
	
	a1.x=0x10;	
	a1.y=0x1121; 
	printf("a1.x=%x\na1.y=%x\na1.ch=%c\n",a1.x,a1.y,a1.ch); //0x10,  0x1121,   !
	printf("sizeof of union A =%dbytes\n",sizeof(a1));      //4bytes
	
	return 0;
}


