// 1.Write a program to write your name into the file

#include<stdio.h>

int main()
{	FILE *fd=fopen("calculator.txt","r+");
	char name[10];
	
	fprintf(fd,"%s","Nimesh");
	
	return 0;
}


