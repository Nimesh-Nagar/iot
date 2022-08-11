/*
    Race condition : uncertain/unpredictiable about the final output 
    in multiprocessing environment
    Solution : using vfork() -  vfork doesn't start the execution of 
    parent until child does not exit.
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
long long int final_value = 0;  //shared variable
int main()
{
    pid_t pid;
    int count1, count2;
    pid = fork();
    if (pid == 0)
    {
        for(count1 = 0; count1<=100; count1++)
        {
            //printf("Child count = %d\n",count1);
            final_value = final_value - 1;
            printf("the final value via parent = %lld \t",final_value);
        }
       // exit(0);
    }
    else if (pid > 0)
    {
        for(count2 = 0; count2<=50; count2++)
        {
            //printf("Parent count = %d\n",count2);
            final_value = final_value + 1;
            printf("the final value via child = %lld \t",final_value);
        }
    }
    else
    {
            printf("Child process is not created\n");
    }
        
    return 0;
}