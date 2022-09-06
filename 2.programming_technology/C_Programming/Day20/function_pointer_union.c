#include<stdio.h>


typedef union SA{
	int (*circle_area)(int);
	int (*rectangle_area)(int,int);
}ShapeArea;

int circle_a(int rad){return 3.14*rad*rad;}
int rectangle_a(int l,int b){return l*b;}



int main(){
	
	ShapeArea area;
	area.circle_area = &circle_a;
	area.rectangle_area = &rectangle_a;
	int (*f)(int,int) = &area;
	return 0;
}
