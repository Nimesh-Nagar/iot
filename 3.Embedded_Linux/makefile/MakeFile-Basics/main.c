#include <stdio.h>
#include "sum.h"
#include "mul.h"
int main()
{
    int num1, num2;
    printf("Learning How to Write Make File");
    printf("Enter first number\n");
    scanf("%d",&num1);
    printf("Enter second number\n");
    scanf("%d",&num2);
    int res1 = sum(num1,num2);
    int res2 = mul(num1,num2);
    printf("%d + %d = %d\n",num1, num2, res1);
    printf("%d * %d = %d\n",num1, num2, res2);
    return 0;
}
