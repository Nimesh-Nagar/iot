// check weather a number is a prime or not using recursive function

#include<stdio.h>

int check_prime(int n, int i)
{
    if (n <= 2)
        return (n==2) ? 1:0 ;
    if (n%i == 0)
        return 0;
    if (i == n/2)
        return 1;

    return check_prime(n, i+1);
}


int main()
{
    int num ;
    printf("Enter a number to check Prime or Not : ");
    scanf("%d",&num);  

    int start = 2;
    if(check_prime(num,start)){
        printf("-- %d is a PRIME --\n ",num);
    }
    else{
        printf("-- %d NOT a PRIME --\n ",num);
    }


    return 0;
}
