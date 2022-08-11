#include<stdio.h>

int main(){
	//fopen will load the file in RAM and returns a pointer to that file
	FILE *fd = fopen("data.txt","r+");
	char data[100];
	//reading from file
	fread(data,10,1,fd);	
	printf("Data from file : %s\n",data);

	//writing into the file
	char str[100];
	printf("Enter some data to write into the file :\n");
	scanf("%s",str);
	int ret = fwrite(str,10,1,fd);
	printf("Return value of ret : %d\n",ret);

	//Move the cursor
	rewind(fd);//Set the cursor to the begining of file

	fputs("NewData", fd);
	//SEEK_CUR ->Current location
	//SEEK_END -> last location
	//SEEK_SET -> begining of the file
	//offset value is from the given location in third argument
	fseek(fd,3,SEEK_CUR);
	fputs("QWE",fd);
	fseek(fd,0,SEEK_END)
	fclose(fd);
	return 0;
}
