#include<stdio.h>

#define ABS(x) ((x) < 0 ? -(x):(x))

int main()
{
    int array[4] = {1, -2, 3, -4};
    int *p=array+3;

    while(p>=array){
        printf("%d ",ABS(*p));
        p--;

    }

    return 0;
}

