#include <stdio.h>
#include "basic-header.h"
int main()
{
    int number1, number2,choice,res;
    printf("Enter first Number\n");
    scanf("%d",&number1);
    printf("Enter second Number\n");
    scanf("%d",&number2);
    printf("Enter your choice\n");
    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    res = add(number1,number2);
    printf("%d + %d = %d ",number1,number2, res);
    break;
    case 2:
    res = sub(number1,number2);
    printf("%d - %d = %d ",number1,number2, res);
    break;
    case 3:
    res = mul(number1,number2);
    printf("%d * %d = %d ",number1,number2, res);
    break;
    case 4:
    res = div(number1,number2);
    printf("%d / %d = %d ",number1,number2, res);
    break;
    default:
    printf("Enter only between 1,2,3,4\n");
    }
    return 0;
}
