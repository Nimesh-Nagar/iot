/*
    Demonstration of the working of fork system call (man 2 fork)
    fork : used to create a child process
    All the statements written after fork system call is executed twice
    (One by parent process and one by child process)
    code maintained by : bhupendra.jmd@gmail.com
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    printf("Before Fork\n");
    fork();
    /*
            The statement written below will be printed twice
            One will be executed by parent process and one by child process
    */
     
    printf("After fork\n");
    return 0;
}
