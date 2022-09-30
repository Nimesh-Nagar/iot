#include<stdio.h>

int array[10]; //global array // BSS

int main(){
	int arr[5]; // Declaration // local // Main function stack frame
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	arr[3] = 500;
	arr[4] = 600;
	printf("0 -> %d\n", arr[0]);
	printf("1 -> %d\n", arr[1]);
	printf("2 -> %d\n", arr[2]);
	printf("Array %ls \n", arr);
	
	return 0;
}
