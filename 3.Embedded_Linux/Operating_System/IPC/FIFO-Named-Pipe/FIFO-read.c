#include <stdio.h>       //printf
#include <sys/types.h>  //mkfifo
#include <sys/stat.h>  //mkfifo
#include <unistd.h>   //read
#include <stdlib.h>                 //system
#include <fcntl.h>                 //open
#include <string.h> 
int main(int argc, char*argv[])
{
    int fd1;
    char *myfifo = "/tmp/namedfifo";
    char buf[1024];
    /*
        Open the FIFO in read only mode
    */
    fd1 = open(myfifo,O_RDONLY);
    read(fd1,buf,sizeof(buf));
    printf("Msg read from fifo is : %s \n",buf);
    // close file descriptor
    close(fd1);
    return 0 ;
}
