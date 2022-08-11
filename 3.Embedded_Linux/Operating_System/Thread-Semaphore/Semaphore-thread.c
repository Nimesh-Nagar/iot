/*
Applying Semaphore between two threads to avoid race condition
code maintained by : <bhupendra.jmd@gmail.com>

*/
#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
int counter = 0;
sem_t sem; //Semaphore 
void *count1(void *pv)
{
	sem_wait(&sem);   //acquired lock
	int i;
	counter++;
	printf("Count1 start: The value of counter = %d\n",counter);
	for(i=0;i<0xffffffff;i++);
	printf("count1 end : the value of counter = %d\n",counter);
	sem_post(&sem); //Release lock
}
void *count2(void *pv)
{
        sem_wait(&sem);   //acquired lock
	int i;
	counter++;
        printf("Count2 start: The value of counter = %d\n",counter);
        for(i=0;i<0xffffffff;i++);
        printf("count2 end : the value of counter = %d\n",counter);
	sem_post(&sem); //Release lock
}
int main()
{
	pthread_t t1, t2;
	sem_init(&sem,0,1);  //Semaphore initialization , 0 stand for semaphore is shared between threads, 1 is initial value of semaphore
	pthread_create(&t1, NULL, count1, NULL);
	pthread_create(&t2, NULL, count2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	sem_destroy(&sem);	
	return 0;
}





