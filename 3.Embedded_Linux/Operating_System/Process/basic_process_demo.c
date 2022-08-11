#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[])
{
   for (int count = 0; count <10; count++)
   {
        printf("Basic Process Creation in c\n");
        sleep(10); // blocking
   }
   return 0;
}