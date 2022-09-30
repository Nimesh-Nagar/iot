#include<stdio.h>

int num; // Global Variable // Value is 0 // Located in BSS
int x= 10; //Global variable // Value is 10 // Intialized data segment
//Accessible in all functions in same file

//To check stack size 
//ulimit -s

//Set Stack size
//ulimit -s STACK_LIMIT
//ulimit -s 10000


// Get Memory layout info
//size executable_file

//GDB commands:
//step -> go inside function
//where -> Check stack

void print_data(int i){
	printf("This is data %d\n",i);
	for(int j = 0 ; j < 2 ; j++){
		print_data(j);
	}
}


int main(){
	
	for(int i = 0 ; i < 4 ; i++){
		print_data(i);
	}

	return 0;
}

