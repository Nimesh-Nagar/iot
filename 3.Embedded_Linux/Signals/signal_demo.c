#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>
#include <signal.h>
int main(int argc, char* argv[])
{
    pid_t pid;

    pid = fork();
    if (pid == 0)
    {
            while (1)
            {
                printf("Hi I am from child process\n");
                usleep(50000);
            }
    }
    else if (pid >0)
    {
            sleep(1);
            kill(pid,SIGKILL);
            wait(NULL);
    }
    else
    {
        perror('failed to create child process)');
        exit(0);
    }
    return 0;
}
