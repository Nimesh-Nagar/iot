#include <stdio.h>
#define BEGIN int main(void){
#define END }
#define SUM(x,y) ((x)+(y))
#define PROD(x,y) ((x)-(y))

BEGIN

    int a= 5, b= 4;
    int r1 = SUM(a,b); 
    int r2 = PROD(a,b);

    printf("result 1 : %d\n",r1);
    printf("result 2 : %d\n",r2);

END 