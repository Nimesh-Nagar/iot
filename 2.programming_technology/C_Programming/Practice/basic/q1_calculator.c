//Implement a choice based arithmetic calculator (1-add,2-sub,3-mul,4-div etc)
#include <stdio.h>
int main()
{
    int num1,num2,ch;
    while(1){

        printf("\nEnter First Number : ");
        scanf("%d",&num1);
        printf("\nEnter Second Number : ");
        scanf("%d",&num2);

        printf("1. Add \n");
        printf("2. Sub \n");
        printf("3. Mul \n");
        printf("4. Div \n");
        printf("5. Exit \n");
        printf("Please choose any operation from above choices : ");
        scanf("%d",&ch);

        switch(ch){
            case 1 : printf("Addition of Two Numbers (%d + %d) is : %d ",num1,num2,num1+num2);
                     break;

            case 2 : printf("Subtraction of Two Numbers (%d - %d) is : %d ",num1,num2,num1-num2);
                     break;

            case 3 : printf("Multiplication of Two Numbers (%d * %d) is : %d ",num1,num2,num1*num2);
                     break;

            case 4 : float div= (float)num1 / num2 ; 
                    printf("Division of Two Numbers (%d / %d) is : %.2f ",num1,num2,(float)num1 / num2);
                     break;

            case 5 : break;

            default : printf("Please Choose appropriate options \n");
                     break;

        }

    }
    


    return 0;
}