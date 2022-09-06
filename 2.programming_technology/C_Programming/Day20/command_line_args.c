#include<stdio.h>

//int main(count_of_arg,arguments_array)
int main(int argc,char* argv[]){
	printf("Number of arguments = %d\n",argc);
	
	printf("argv[0] = %s\n",argv[0]);
	printf("argv[1] = %s\n",argv[1]);
	printf("argv[2] = %s\n",argv[2]);
	printf("argv[3] = %s\n",argv[3]);
	return 0;
}
