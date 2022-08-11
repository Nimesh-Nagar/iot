#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    if (argc < 3 )
    {
        printf("Usage : %s <serv_ip> %s <serv_port>\n",argv[1],argv[2]);
        exit(1);
    }

// variales 
    int cfd, serv_port;
    serv_port = strtoul(argv[2], NULL, 10); //string to unsigned long int

// 1.socket API starts     
    if((cfd=socket(AF_INET,SOCK_STREAM,0))<0)
    {
        perror("socket");
	    exit(2);
    }

    struct sockaddr_in saddr = {0};
	saddr.sin_family = AF_INET;                  // set to AF_INET
	saddr.sin_port = htons(serv_port);           // Port number
	saddr.sin_addr.s_addr = inet_addr(argv[1]);  // IP address eg "192.168.1.1"

// 2. Connect to the server using proper API for connect
    if (connect(cfd, (struct sockaddr *)&saddr, sizeof(saddr)) < 0)
	{
		perror("connect");
		close(cfd);
		exit(3);
	}
    else{
        printf("Connection Established......\n");
    }

// 3. Send data to connected server
    char buff[100];
    printf("Msg to send : ");
    scanf("%s",buff);
    
    if (send(cfd, buff, strlen(buff), 0) < 0)
	{
		perror("error in sending..");
		close(cfd);
		exit(4);
	}

// 4. Receive data from connected server and print data received
    char buf[20];
	if (recv(cfd, buf, sizeof(buf), 0) < 0)
	{
		perror("recv");
		close(cfd);
		exit(5);
	}
    printf("Response from server: %s\n", buf);

	close(cfd); 
    

    return 0;

}

