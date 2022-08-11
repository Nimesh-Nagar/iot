#include<stdio.h>

int input()
{
	int num;//local variable not accessible outside input block
	printf("Enter value of n=");
	scanf("%d",&num);
	return num;//returnig the int type value as it is the return type of function
}

int addition_n_num(int num)//int a ia aslo a local variale
{	
	int sum=0;
	for(int i = 0; i<=num; i++)
	{
		sum = sum + i;
	}	return sum;			
}
int average (int sum,int num)
{
	return sum/num;

}

int main()//block created a scope and variablels within itare called as local variables
{
	int a;
	//int a;//redeclaration error
	a = input();
	int res = addition_n_num(a);
	int avg = average(res,a);
	printf("sum is %d \n Avg is %d\n",res,avg);
	return 0;
}
