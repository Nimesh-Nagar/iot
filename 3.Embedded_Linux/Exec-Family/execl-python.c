/*
Run a python file using execl
code maintained by: <bhupendra.jmd@gmail.com>
*/
#include <stdio.h>
#include <unistd.h>
int main()
{
    char *pythonlocation = "/usr/bin/python3";
    printf("Hello world in C\n");
    sleep(30);
    execl(pythonlocation,"python","HelloWorld.py",NULL);
    printf("after Execl");
}
