/*  Analyse the following code
union A
{
int x;
float y;
double z;
int arr[2];
}a1;
a1.y=6.25f;
printf(“x=%x\n”,a1.x);
a1.z=0.15625;;
printf(“%x%x\n”,a1.arr[1],a1.arr[0]);

*/

#include<stdio.h>

int main()
{
	union A
	{
		int x;
		float y;
		double z;
		int arr[2];
	}a1;
	
	a1.y=6.25f;
	//printf("x=%x\n",a1.x);
	printf("y=%f\n",a1.y);
	a1.z=0.15625;
	printf("%x  %x\n",a1.arr[0],a1.arr[1]);
	
	return 0;
	
}
