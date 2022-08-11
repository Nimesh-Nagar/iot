#include <stdio.h>
#include <unistd.h>
/*
	The exec* family of functions replaces the current image of the process
	with a new process !!
	Hence the statements written after execl will be replaced by new process

	When a process calles execl function:
	process cease to run the current program and begins to execute new program
*/
int main()
{
    char *binaryLocation = "/bin/bash";
    char *arg1 = "./test.sh";
    printf("Before Execl\n");
    execl(binaryLocation, "bash", arg1, NULL);
    printf("After Execl\n");
}
