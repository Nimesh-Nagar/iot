/*
Write data into named pipe using write system call
named pipe will be created using library function mkfifo
refer : man 3 mkfifo
#Check pipe is created or not
ls -l <path given in mkfifo> e.g. ls -l /tmp/myfifo
----> <myfifo> is named pipe
Note:
Opening the FIFO/named pipe for writing is blocked until another process opens
the FIFO for reading 

Difference between PIpe and Message Queue:
1. Pipe is used to read/write data character by character - good for embedded (serial comm.)
2. Message queue write data in form of packets (networking like sockets)

Message queue : data is written in network byte order (Big Endian)
123 - 123 (Big Endian)
123 - 321 (Little Endian)

*/
#include <stdio.h>       //fgets & printf
#include <sys/types.h>  //mkfifo
#include <sys/stat.h>  //mkfifo
#include <unistd.h>   //write
#include <stdlib.h>                 //system
#include <fcntl.h>                 //open
#include <string.h>               //strlen
int main()
{
    int pipefd;
    int fd;
    char buffer[1024] ;
    /*
        delete FIFO is exists

    */
    system("rm /tmp/namedfifo");
    /*
        Path for named pipe
    */
    char *myfifo = "/tmp/namedfifo"   ;
    /*
            Create a named pipe (namedfifo) in temp directory
            PIPE WITH read write permissions to 
            user, group, and others

    */
    pipefd = mkfifo(myfifo,0666);   
    if(pipefd < 0 )
    {
        perror("Failed to create named pipe \n");
        exit(0);
    }
    else
    {
        fd = open(myfifo,O_WRONLY) ;     //Open fifo for write operations
        printf("Enter your text to write in to fifo\n");
        /*
            Take input from standard input (Keyboard/console)
        */
        fgets(buffer,sizeof(buffer),stdin);
        int nbytes = write(fd,buffer,strlen(buffer)+1);
        if(nbytes < 0 )
        {
            perror("No Bytes is written in FIFO\n");
        }
        else
        {
            printf("%d bytes is written successfully in named fifo \n",nbytes);
        }
        // close the file descriptor
        close(fd);
    }
    
    return 0;
}
