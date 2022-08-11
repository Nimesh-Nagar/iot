/*
ret values :
0 --> child process block
-1 --> child process creation failed
pid of the child or > 0 --> parent block
pid_t fork(void);
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main (int argc, char* argv[])
{
    pid_t ret;
    int count = 0;
    printf("---> statement before fork --> \n");
    ret = fork();
    fork();
    fork();
    fork();
    printf("---> statement after fork --> \n");
}
       
