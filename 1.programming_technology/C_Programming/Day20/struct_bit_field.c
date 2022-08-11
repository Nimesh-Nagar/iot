#include<stdio.h>

int main(){
	struct Student{
		int prn;
		char name[100];
		unsigned age : 4; // 15
	};
	struct Student s1;

	s1.age = 0xD;
	s1.age = 0x8;// 10 is integer and storing on bits
//	scanf("%d",&s1.age)
	printf("%d",s1.age);
	return 0;
}	
