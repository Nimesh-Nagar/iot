/*
The exec*() family of functions replaces the current process with a new process,
loaded from an executable file. Hence the calling process is replaced, 
 with the new process.
                    or
when a process issues an exec() function call, 
that process ceases to run the current program and begins to run another program. 

*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
char *args[2] = {"./echodemo", NULL};
execvp(args[0],args);

/*
All statements are ignored after execvp system call

*/

printf("End of the code execution\n");
}