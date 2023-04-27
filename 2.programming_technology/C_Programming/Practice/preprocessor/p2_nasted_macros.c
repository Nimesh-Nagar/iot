#include<stdio.h>

#define A 50
#define B A+100 

int main()
{
    int i = B/20;   // 50 + 100 / 20  
    int j = 500-B;  // 500 - 50 + 100 
    printf("i = %d \t j = %d ",i,j); //55 and 550

    return 0;
}
