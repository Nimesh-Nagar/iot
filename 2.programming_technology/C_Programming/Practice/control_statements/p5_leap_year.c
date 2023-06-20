#include<stdio.h>

int main()
{
    int num; 
    printf("Enter year to check it is leap year or not  : ");
    scanf("%d",&num);

    if(num%100 != 0 && num%4 == 0 || num%400 == 0){
        printf("%d is a Leap Year\n",num);

    }
    else
        printf("%d is not a Leap Year \n",num);

    
    return 0;
}