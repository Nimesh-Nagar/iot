#include<stdio.h>

int main(){
	//fopen will load the file in RAM and returns a pointer to that file
	FILE *fd = fopen("data.txt","r+");
	char data[100];

	//reading from file
	fgets(data,10,fd);
	printf("data from file : %s\n",data);

	//writing data to the file
	fputs("Siddhant",fd);
	

	return 0;
}
