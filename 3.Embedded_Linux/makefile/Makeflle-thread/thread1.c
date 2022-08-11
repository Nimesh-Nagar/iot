#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include "routine1.h"
#include "routine2.h"
extern int val;
int main(int argc, char *argv[])
{
    pthread_t t1,t2;
    pthread_create(&t1, NULL, &routine1, NULL);
    pthread_create(&t2, NULL, &routine2, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("The value of val = %d\n",val);
}