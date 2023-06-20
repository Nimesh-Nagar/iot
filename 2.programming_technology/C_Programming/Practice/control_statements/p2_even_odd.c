// check number is even of odd

#include<stdio.h>

int main()
{
    int num; 
    printf("Enter a number to check even or odd : ");
    scanf("%d",&num);

    if(num%2 ==0){
        printf("%d is Even \n",num);
    }
    else{
        printf("%d is Odd \n",num);
    }

    
    return 0;
}