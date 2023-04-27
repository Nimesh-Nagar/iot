#include<stdio.h>
#define INC(dtype,x,i) x=x+i 

int main()
{
    int arr[5] = {20,34,56,12,96};
    int *ptr = arr;

    INC(int,arr[2],3);  // arr[2] = 56 + 3 
    INC(int*,ptr,2);
    printf("*ptr value = %d \n",*ptr); //   ptr = ptr+2, i.e arr[2] = 59
    
    return 0;
}