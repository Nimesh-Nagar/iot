#include <stdio.h>
#include <addsub.h>
int main()
{
    int choice, num1, num2;
    printf("Enter the operations to be performed Add :1 or sub : 2 \n");
    scanf("%d",&choice);
    printf("Enter first number\n");
    scanf("%d",&num1);
    printf("Enter Second number\n");
    scanf("%d",&num2);
    if(choice == 1)
    {
        int out = addTwoNumbers(num1,num2);
        printf("%d + %d = %d ",num1,num2,out);
    }
    else if(choice == 2)
    {
        int out1 = subTwoNumbers(num1,num2);
        printf("%d - %d = %d ",num1,num2,out1);
    }
    else
    {
        printf("wrong input \n");
    }
    return 0;
}
