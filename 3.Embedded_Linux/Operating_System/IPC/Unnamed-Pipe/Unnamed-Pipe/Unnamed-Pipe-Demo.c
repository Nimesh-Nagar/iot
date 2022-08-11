/*
Write and read data to a pipe using read and write system calls
parent process - Writes data
child process - Reads data
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAX_MSG_SIZE 100
char *msg1 = "Pipes are used for one way communication";
char *msg2 = "First need to write data in buffer";
char *msg3 = "Then read data from buffer";
int main()
{
    char buffer[MAX_MSG_SIZE];
    int p[2], nbytes;
    /*
        p[1] - write data (pipe descriptor for writing the data)
        p[0] - read data  (pipe descriptor for reading the data)
    */
    pid_t pid;
    int ret = pipe(p);
    if(ret == -1)
    {
        perror("Pipe not created\n");
        exit(1);
    }
    
    pid = fork();
    if(pid <0)
    {
        perror("CHild process not created\n");
    }
    else if(pid > 0)
    {
            close(p[0]);
            write(p[1],msg1,MAX_MSG_SIZE );
            write(p[1],msg2,MAX_MSG_SIZE );
            write(p[1],msg3,MAX_MSG_SIZE );
            close(p[1]);
            wait(NULL);  // wait for child to to die
    }
    else
    {
        close(p[1]); 
        while ((nbytes = read(p[0], buffer, MAX_MSG_SIZE)) > 0) 
        {
            printf("%s\n", buffer); 
        }
        close(p[0]);
    } 
        printf("Finished reading\n");
    
    return 0;
}
