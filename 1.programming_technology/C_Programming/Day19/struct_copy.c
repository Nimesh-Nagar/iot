#include<stdio.h>

int main(){
	struct A{
		int x;
		char str[20];
	};
	struct A a1 = { 101, "abc" } ;
	struct A a2;
	a1.x=10;
	printf("a1.str = %s  a1.x=%d  &a1 = %x &a1.x =%x &a1.str= %x sizeof(a1) = %d\n",a1.str,a1.x,&a1,&a1.x,&a1.str,sizeof(a1));
	
//	a2.x = 100;
//	a2.str = "Siddhant";
//	printf("a2.str = %s  &a2.str=%x\n",a2.str,a2.str);
//	a2.str = "Abhishekk";
//	printf("a2.str = %s  &a2.str=%x\n",a2.str,a2.str);

//	printf("Enter a2.str : ");
//	scanf("%s",a2.str);
	
	a2 = a1;

	printf("a2.str = %s  a2.x=%d &a2 = %x &a2.x =%x &a2.str= %x sizeof(a2) = %d\n",a2.str,a2.x,&a2,&a2.x,&a2.str,sizeof(a2));
	return 0;
}
