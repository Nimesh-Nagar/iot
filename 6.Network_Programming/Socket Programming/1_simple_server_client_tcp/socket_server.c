#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> // timer,ram... system  etc
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s <port_no>\n", argv[1]);
		exit(1);
	}

// Initialize variables
int sfd, cfd, port_no;
port_no = strtoul(argv[1],NULL,10); /* function converts the initial part of the string to an unsigned long int 
                                       value according to the given base (10(decimal),8,16) */

/*
Create your Socket do error checking
Remember socket returns a socket descriptor 

AF_INET -------> protocol/address family  
SOCK_STREAM -----> TCP 
SOCK_DGRAM  -----> UDP

*/

// 1. socket API start
if((sfd = socket(AF_INET,SOCK_STREAM,0))<0)
{
    perror("socket");
    exit(2);
}

struct sockaddr_in saddr={0};       // server side ip address structure

saddr.sin_family = AF_INET;         // IP Address family IPv4 //AF_INET6 for IPv6
saddr.sin_port = htons(port_no);    // htons => host(little endian) to network(little endian) byte ordering conversion.
saddr.sin_addr.s_addr = INADDR_ANY; // Accept any IP address.

// 2. Bind is used to assigning port
if(bind(sfd, (struct sockaddr *)&saddr, sizeof(saddr))<0)
{
    perror("bindind not done");
    close(sfd);
    exit(3);
}
printf("Binding Process done \n"); 

// 3. Waits for incoming connection (listening mode)
if(listen(sfd, 5)< 0)   //sfd = puts socket in listening state, willing to handel incoming TCP connection req.
                        // 5 = BACKLOG: no. of TCP conncetion that can be queued at the socket.
{
    perror("not listening");
    close(sfd);
    exit(4);
}
printf("Server is now Listening at %s port number \n",argv[1]);

//3. Accepts the incoming connection
struct sockaddr_in caddr = {0}; //client side ip address structure
socklen_t len = sizeof(caddr);
if((cfd= accept(sfd,(struct sockaddr *)&caddr,&len))<0)
{
    perror("Accept denied");
    exit(5);

}
printf("Connection request Accepted");

//i. receiving response form client
char buff[100];
int ret = 0 ;
if((ret= recv(cfd,buff,sizeof(buff),0))<0) 
{
    perror("Data not receive \n");
    close(cfd);
    close(sfd);
    exit(6);
}
else{
    printf("Form Client : %s \n",buff);
}

//ii. send response to client
if(send(cfd,buff,ret,0)<0) //sending response back to client
{
    perror("Data not Send\n");
    close(cfd);
    close(sfd);
    exit(7);
}

close(cfd);
close(sfd);

    return 0;
}
