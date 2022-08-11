#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<string.h>
#include <arpa/inet.h>
#include <unistd.h> // for close
#include<pthread.h>
#include <sys/types.h> 

char client_message[2000];
char buffer[1024];
int clientno;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void * socketThread(void *arg)
{
  int cfd = *((int *)arg);
  recv(cfd , client_message , 2000 , 0);
  printf("Hello from client %s\n",client_message);
  // Send message to the client socket 
  pthread_mutex_lock(&lock);
  
  sprintf(buffer, "Hello from server thread : %d\n",clientno);
  
  pthread_mutex_unlock(&lock);
  
  sleep(1);
  send(cfd,buffer,(int)strlen(buffer),0);
  close(cfd);
  pthread_exit(NULL);
}

int main(int argc, char *argv[]){
  int sfd, cfd;
  int port_no;
  struct sockaddr_in serverAddr;
  struct sockaddr_storage serverStorage;
  socklen_t addr_size;
  //for command line argument
  if (argc < 2)
	{
		printf("Usage: %s <port_no>\n", argv[0]);
		exit(1);
	}
  port_no = strtoul(argv[1], NULL, 10);
  //Create the socket. 
  sfd = socket(PF_INET, SOCK_STREAM, 0);
  // Configure settings of the server address struct
  // Address family = Internet 
  serverAddr.sin_family = AF_INET;
  //Set port number, using htons function to use proper byte order 
  serverAddr.sin_port = htons(port_no);
  //Set IP address to localhost 
  serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  //Set all bits of the padding field to 0 
  
  //memset to set memory eg. (buff[20], '0'  20) all will 0==> [0,0,0,0,.......,0]
  memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);
  //Bind the address struct to the socket 
  bind(sfd, (struct sockaddr *) &serverAddr, sizeof(serverAddr));
  //Listen on the socket, with 50 max connection requests queued 
  if(listen(sfd,50)==0)
    printf("Listening\n");  
  else
    printf("Error\n");
    
    pthread_t tid[60];
    int i = 0;

    while(1)
    {
      //Accept call creates a new socket for the incoming connection
      addr_size = sizeof serverStorage;
      cfd = accept(sfd, (struct sockaddr *) &serverStorage, &addr_size);
      printf("Accepted a new client no:%d\n",i);
      clientno++;

      //for each client request creates a thread and assign the client request to it to process
      //so the main thread can entertain next request
      if( pthread_create(&tid[i++], NULL, socketThread, &cfd) != 0 )
          printf("Failed to create thread\n");

        if( i >= 50)
        {
          i = 0;
          while(i < 50)
            pthread_join(tid[i++],NULL);

          i = 0;
        }
    }
  return 0;
}
