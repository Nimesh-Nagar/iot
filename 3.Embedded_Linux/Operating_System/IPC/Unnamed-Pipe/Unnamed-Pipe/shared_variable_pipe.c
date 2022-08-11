/*
Write and read data to a pipe using read and write system calls
child process - Writes data
parents process - Reads data
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int shared_val = 4;

int main()
{
    int buffer;
    int p[2];
    /*
        p[1] - write data (pipe descriptor for writing the data)
        p[0] - read data  (pipe descriptor for reading the data)
    */
    int pid;
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
    else if(pid == 0)
    {
            close(p[0]);
            int wbytes = write(p[1],&shared_val,sizeof(shared_val));
            printf("number of bytes written = %d\n", wbytes);
            close(p[1]);
    }
    else
    {
        wait(NULL);
        close(p[1]); 
        while(read(p[0], &buffer, sizeof(buffer)) > 0) 
        {
            printf("value passed by process p1 = %d\n", buffer); 
        }
       buffer = buffer + 6;
       shared_val = buffer;
       printf("the value of shared_val modified by p2 = %d\n",shared_val);
       close(p[0]);
    } 
        printf("shared_val = %d\n",shared_val);    
    return 0;
}
