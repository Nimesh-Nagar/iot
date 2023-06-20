#include<stdio.h>

int main()
{
    int dividend,divisor,quo,rem; 
    printf("\nEnter dividend : ");
    scanf("%d",&dividend);
    printf("\nEnter divisor : ");
    scanf("%d",&divisor);

    if(divisor){
        quo=dividend/divisor;
        rem=dividend%divisor;
        printf("\nQuotient = %d and Remender = %d ",quo,rem);
    }    
    else
        printf("Divisor can not be zero \n");
    
    return 0;
}