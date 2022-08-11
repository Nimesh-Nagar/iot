/*
	Handling all possible values of fork system call
	code maintained by : <bhupendra.jmd@gmail.com>

*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    pid_t ret;
    ret = fork();
    if (ret == 0 )
    {
        
        printf("Child process is created \n");
    }
    else if(ret>0)
    {
        printf("parent process block\n");
        printf("%d\n",ret);
    }
    else
    {
            perror("child is not created \n");
    }
    
   return 0;
}
