/* 1.Write a program to caculate the sum of n numbers(Use static varaibles) */

#include <stdio.h>

int add(){
    static int i = 0;
    static int num = 0;
    i++;
    num = num + i;
    return num;
}
   
int main()
{
	int n,sum;
	printf("Enter first n numbers : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		add();
		//sum = add();
	}
	// printf("Sum = %d ",sum);
	return 0;
}

