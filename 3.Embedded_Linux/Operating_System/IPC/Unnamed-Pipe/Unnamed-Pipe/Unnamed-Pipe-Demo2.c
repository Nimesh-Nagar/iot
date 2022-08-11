/*
 Unnamed Pipe : 
 Pipe descriptor 0 is used for read and 1 is used for writing purpose
 Read characters from the pipe and echo them to standard output (console)
*/
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
void readDataFromPipe(int file)
{
    FILE *fd;
    int c;
    fd = fdopen(file,"r");
    while((c = fgetc(fd)) != EOF)
    {
            putchar(c);
           
    }
     fclose(fd);
}
void writeDataToPipe(int file)
{
    FILE *fp;
    fp = fdopen(file,"w");
    fprintf(fp,"Pipe can be used for IPC\n");
    fprintf(fp,"Descriptor 0 is used for read and 1 is used for write\n");
    fclose(fp);
}
int main()
{
    pid_t pid;
    int iotpipe[2] ;   //pipe descriptor
    int ret = pipe(iotpipe);
    if(ret < 0 )
    {
        perror("failed to create the pipe \n");
        exit(0);
    }
    //fork system call -  To create the child process
    pid = fork();
    if(pid == 0)
    {
        close(iotpipe[1]);  //close write descritor of pipe
        readDataFromPipe(iotpipe[0]);
        return EXIT_SUCCESS;
    }
    else if(pid > 0)
    {
        close(iotpipe[0]);  //close read descriptor of pipe
        writeDataToPipe(iotpipe[1]);
        wait(NULL);
       return EXIT_SUCCESS;
    }
    else
    {
        perror("Failed to create Child Process !!\n");
        exit(0);
    }
    return 0;
}

