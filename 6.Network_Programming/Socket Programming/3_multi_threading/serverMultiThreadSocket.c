// C program for the Server Side
 
// inet_addr
#include <arpa/inet.h>
 
// For threading, link with lpthread
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

// mutex variables
pthread_mutex_t mutex= PTHREAD_MUTEX_INITIALIZER;
int readercount = 0;
int cfd;
char buff[1024];
char client_mesage[2000];
int clientno;


void *socketThread(void *msg)
{
	int cfd= *((int *)msg);
	recv(cfd,client_mesage,2000,0);
	
	pthread_mutex_lock(&mutex);

	sprintf(buff,"hello form server THREAD : %d\n",clientno);
	//printf("Form Client : %s \n",client_mesage);
	pthread_mutex_unlock(&mutex);

	
	if(send(cfd,buff,(int)strlen(buff),0)<0) //sending response back to client
	{
		perror("Data not Send\n");
		exit(7);
	}
	
	close(cfd);
	pthread_exit(NULL);
	
}

int main(int argc, char *argv[])
{

	if (argc < 2)
	{
		printf("Usage: %s <port_no>\n",argv[1]);
		exit(1);
	}
	printf("Server is listening to  %s port number \n",argv[1]);

  
// Initialize variables
    int sfd, port_no;
    port_no = strtoul(argv[1], NULL, 10);
   

// Creating Socket 
    if((sfd = socket(AF_INET,SOCK_STREAM,0))<0)
	{
    perror("socket");
    exit(2);
	}
	struct sockaddr_in saddr;
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(port_no);
	saddr.sin_addr.s_addr = 1;// Accept any ip address
	memset(saddr.sin_zero,'\0',sizeof saddr.sin_zero); //set all bits of the padding feild to 0

//1. Bind is used for assigning port
	if (bind(sfd, (struct sockaddr *)&saddr, sizeof(saddr)) < 0) 
	{
		perror("bind");
		close(sfd);
		exit(3);
	} 
//2. waits for incoming connection
// Listen on the socket
	if (listen(sfd, 50)==0) 
    {
        printf("Server is Listening\n");
    }
    else
	{
		perror("listen");
		close(sfd);
		exit(4);
	}   
//threads variales
   	pthread_t tid[60];
	pthread_mutex_init(&mutex,NULL);
	int i=0;

while(1){
//3. Accept call creates  new socket for the incoming connection
	struct sockaddr_storage caddr;
	socklen_t len = sizeof(caddr);

	cfd = accept(sfd, (struct sockaddr *)&caddr, &len);
	printf("Accepted new client no. : %d\n",i);
	clientno++;

	//creating Receive thread
	if(pthread_create(&tid[i++],NULL,&socketThread,&cfd) !=0);
	{
		printf("Failed to create thread\n");
	}

	if(i>=50)
	{
		i=0;
		while(i<50)
		{
			pthread_join(tid[i++], NULL);
		}
		i=0;
	}
}
    return 0; 
}