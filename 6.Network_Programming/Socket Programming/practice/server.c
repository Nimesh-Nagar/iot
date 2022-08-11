#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("<port_no.> %s ",argv[1]);
        exit(1);
    }

    int sfd, cfd, port_no;
    port_no = strtoul(argv[1],NULL,10);

    // 1. 
    if((sfd = socket(AF_INET,SOCK_STREAM,0) )<0){
        printf("socket not created \n");
        
        exit(1);
    }

    struct sockaddr_in saddr = {0}; // ip address struct
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(port_no);
    saddr.sin_addr.s_addr = INADDR_ANY;

    //2. binding
    if(bind(sfd, (struct sockaddr *)&saddr,sizeof(saddr))<0){
        perror("binding error");
        close(sfd);
        exit(2);
    }
    printf("Binding process done... \n");

    //3. listen
    if(listen(sfd,5)<0){
        printf("error");
        close(sfd);
        exit(3);
    }
    printf("Server is running at port no %s \n ",argv[1]);

    struct sockaddr_in caddr={0};
    socklen_t len = sizeof(caddr);

    //4. accept
    if(cfd = accept(sfd, (struct sockaddr *)&caddr, &len)<0){
        printf("connection not accepted \n");
        close(sfd);
        exit(4);
    }

    char buff[100];
    int ret = 0;
    if(ret = recv(cfd,buff,sizeof(buff),0)<0){
        perror("msg not received\n");
        close(sfd);
        close(cfd);
        exit(5);
    }
    printf("Message from Client:  %s ",buff);

    if(send(cfd,buff,ret,0)<0){
        perror("msg not send\n");
        close(sfd);
        close(cfd);
        exit(6);
    }

    close(cfd);
    close(sfd);


    return 0;
}
