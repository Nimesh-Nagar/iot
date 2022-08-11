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

    int cfd, serv_port;
    serv_port=strtoul(argv[2],NULL,10);

    if((cfd=socket(AF_INET,SOCK_STREAM,0))<0)
    {
        perror("socket");
	    exit(2);
    }

    struct sockaddr_in saddr = {0};
	saddr.sin_family = AF_INET;                  // set to AF_INET
	saddr.sin_port = htons(serv_port);           // Port number
	saddr.sin_addr.s_addr = inet_addr(argv[1]);  // IP address eg "192.168.1.1"



    if (connect(cfd, (struct sockaddr *)&saddr, sizeof(saddr)) < 0)
	{
		perror("connect");
		close(cfd);
		exit(3);
	}
    else{
        printf("Connection Extablished......\n");
        printf("======================================================\n");
    }

    char sendData[100];
    char buf[20];
    while(1)
    {

       if (recv(cfd, buf, sizeof(buf), 0) < 0)
       {
            perror("err in  recv");
            close(cfd);
            exit(5);
	    }
        printf("From Host: %s\n", buf);

        printf("ME : ");
        scanf("%s",sendData);

        if (send(cfd, sendData, strlen(sendData), 0) < 0)
	    {
            perror("error in sending..");
            close(cfd);
            exit(4);
	    } 


    }

close(cfd); 



    return 0;
}
