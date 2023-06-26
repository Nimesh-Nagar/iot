//C Program to Reverse a Number using Recursion

#include<stdio.h>

void rev_num(int n) //123
{
    if(n!=0){
        int result = n%10;
        printf("%d",result);
        rev_num(n/10);
    } 
}


int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num); 

    rev_num(num);
    return 0;
}
