#include<stdio.h>

int input(){
	int num; // Not accessible outside of this block
	printf("Enter n value :");
	scanf("%d",&num);
	return num; // returning the value
}

int addition_n_num(int num){ // here "a" is also local variable
	int sum=0 ;
	for(int i = 1 ; i<=num;i++){
		sum = sum + i;
	}
	return sum;
}


int average(int sum , int num){
	return sum/num;
}

int main(){ // block creates a scope,Variable inside block is local variable\
//Local variable  : You cannot these variable outside of block
	int num; 
	//int a;
//	int a; //Redeclaration error
	num = input(); // calling input function and got value

	int res = addition_n_num(num);
	int avg = average(res,num);
	printf("Sum is %d \n Avg is %d \n",res,avg);
	return 0;
}
