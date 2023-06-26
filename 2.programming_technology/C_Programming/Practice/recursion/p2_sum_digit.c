// C Program to Find Sum of Digits of a Number using Recursion

#include <stdio.h>

//recursive function 
int sum_dig(int n) //1564 
{
    if(n != 0){
        return (n%10 + sum_dig(n/10)); 
    }
    else{
        return 0;
    }

}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num); // 1564 = 16

    printf("Sum of digits of %d is ----> %d \n",num,sum_dig(num));


    return 0;
}
