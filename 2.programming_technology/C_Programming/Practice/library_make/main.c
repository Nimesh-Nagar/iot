#include<stdio.h>
#include"sum.h"
#include"mul.h"

int main(int argc, char const *argv[])
{
    int num1 , num2;
    printf("How to Write Make file \n");

    printf("\nEnter 1st Number : ");
    scanf("%d",&num1);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&num2);

    int res1 = sum(num1,num2);
    int res2 = mul(num1,num2);

    printf("------------------------------\n");
    printf("%d + %d = %d \n",num1,num2,res1);
    printf("%d * %d = %d \n",num1,num2,res2);

    return 0;
}
