// pring biggest number 
#include<stdio.h>

int main()
{
    int num1,num2,num3,num4; 
    printf("Enter 4 number to check which is biggest \n ");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    if(num1>num2){
        if(num1>num3){
            if(num1>num4){
                printf("Number 1 %d is Biggest of all Numbers ",num1);
            }
            else{
                printf("Number 4 %d is Biggest of all Numbers ",num4);
            }
        }
        else if(num3>num4){
            printf("Number 3 %d is Biggest of all Numbers ",num3);
        }
        else{
            printf("Number 4 %d is Biggest of all Numbers ",num4);
        }       
    }

    else if(num2>num3){
        if(num2>num4){
            printf("Number 2 %d is Biggest of all Numbers ",num2);
        }
        else{
            printf("Number 4 %d is Biggest of all Numbers ",num4);
        }

    }
    else{
        if(num3>num4){
            printf("Number 3 %d is Biggest of all Numbers ",num3);
        }
        else{
            printf("Number 4 %d is Biggest of all Numbers ",num4);
        }

    }

    return 0;
}



