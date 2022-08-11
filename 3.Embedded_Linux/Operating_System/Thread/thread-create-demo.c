/*
library function -> pthread_create  _> man 3 pthread_create
link with -pthread
ps -eo pid,ppid,tid,cmd,stat | grep a.out
pidof a.out 
pidof firefox   #list all pids asscoaited with a cmd/process name
ps -T -p <pid> #list all threads associated with a process
*/
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
//Thread routine --> function
void *routine1(void *msg)
{
  printf("I am fron routine 1\n");   
  sleep(40);
}
int main(int argc, char* argv[])
{
pthread_t t1;
//Create a Thread
pthread_create(&t1,NULL,routine1,NULL);
	/*
	pthread_join will block the calling thread i.e. main thread
	to complete the execution of thread which is passed as a first arugument
	Note:
	if pthread_join will not be used : It may happen that main thread has complete
     its execution and some statement doesn't
	yield the results e.g. printf takes time to send buffer data to console
	*/
printf("I am outside the thread\n");
sleep(60);
pthread_join(t1,NULL);
}