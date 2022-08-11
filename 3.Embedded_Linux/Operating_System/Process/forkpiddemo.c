/*
		Fork system call - 
		getpid - print the process id
		getppid - print the parent process id 
		
		fork :
		retval :
		> 0  	--> parent process (pid of the child process)
		< 0  	--> Error in creating the child process
		== 0 	--> Child Process created
		code maintained by : bhupendra.jmd@gmail.com

*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/*
        fork bomb - Never Practice (DOS Attack) 
          while(1)
          {  
                fork(); 
          }    
*/

int main()
{
    pid_t retval;
    printf("Before Fork\n");
    retval = fork();
    if(retval < 0 )
    {
        perror("Child process is created \n");
        //exit(0);
    }
    /*
        Child Process Block
    */

    else if(retval == 0)
    {
        printf("Child process is executing");
        printf("child process pid = %d\n",getpid());
        printf("parent process pid of this child process = %d\n",getppid());
    }
    /*
            parent process block
    */

    else
    {
        printf ("Parent Process Block\n");
        printf(" process pid of parent block = %d\n",getpid());
        printf("parent process pid of this block = %d\n",getppid());
    }
    
    printf("Done !! Kudos we learned the functionality of fork \n");
    return 0;
}
