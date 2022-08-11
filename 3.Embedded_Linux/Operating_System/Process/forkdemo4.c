/*
	total child process : 2^n-1 (n = number of fork)
	code maintained by : bhupendra.jmd@gmail.com
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  fork(); //2^n-1 (child process will be created)
  fork();
  printf("Fork Demo !! \n");
  return 0;
}
