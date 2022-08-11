#include<stdio.h>

int input(){
	int a;
	printf("Enter number :\n");
	scanf("%d",&a);
	return a;
}

int sum(int x,int y){
	int c = x  + y;
	return c;
}

int sub(int x , int y){
	int c = x - y;
	return c;
}

int main(){
	int x = input();
	int y = input();
	int res = sum(x,y)
	printf("Sum is %d\n",res);
	res = sub(x,y);
	printf("Sub is %d\n",res);
}
