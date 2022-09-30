#include<stdio.h>

int main(){
	//fopen will load the file in RAM and returns a pointer to that file
	FILE *fd = fopen("data.txt","r+");
	char data[100];

	//read data from file	
	fscanf(fd,"%s",data);
	printf("Data from file : %s\n",data);	

	fprintf(fd,"%s","Tushar");

	return 0;
}
