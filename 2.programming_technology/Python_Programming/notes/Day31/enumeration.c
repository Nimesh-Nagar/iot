#include<stdio.h>

int main(){
//	enum Keys{UP,DOWN,LEFT,RIGHT};
		// 0 1    2     3
//	enum Keys k = UP ;
//	printf("%d",k);//0
//	enum Keys k1 = LEFT ;
//	printf("%d",k1);//2

//	enum Keys{UP=1,DOWN,LEFT,RIGHT};
		//  1   2    3    4
//	enum Keys k2 = DOWN;
//	printf("%d\n",k2);//2
	enum Keys{UP,DOWN,LEFT=100,RIGHT};
		// 0   1    100    101
	enum Keys k2 = DOWN;
	printf("%d\n",k2);//1


	return 0;
}
