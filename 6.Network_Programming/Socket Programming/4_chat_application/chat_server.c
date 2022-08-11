#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Please Enter port number : %s <Port_No.>\n",argv[0]);
        exit(1);
    }
    //initializing variables:
    int sfd, cfd, port_no;
    port_no=strtoul(argv[1],NULL,10);

    if((sfd=socket(AF_INET,SOCK_STREAM,0))<0)
    {
        perror("Socket not created");
        exit(2);
    }

    //variables for ip address
    struct sockaddr_in saddr = {0}; // server side ip addr struct.
    saddr.sin_family = AF_INET; //IP addr family
    saddr.sin_port = htons(port_no);    //host to network byte ordering conversion
    saddr.sin_addr.s_addr = INADDR_ANY; // Accepting any IP addr

    if(bind(sfd,(struct sockaddr *)&saddr,sizeof(saddr))<0)
    {
        perror("Binding not done");
        close(sfd);
        exit(3);
    }
    printf("Binding DONE....");

    if(listen(sfd,5)<0)
    {
        perror("NOt listening");
        close(sfd);
        exit(4);
    }
    printf("Server is listening at %s \n",argv[1]);

    struct sockaddr_in caddr ={0}; //client ip addr
    socklen_t len = sizeof(caddr);
    if(cfd=accept(sfd,(struct sockaddr *)&caddr,&len)<0)
    {
        perror("Accept denied");
        exit(5);
    }
    printf("Connection request Accepted\n");
    
    char buff[100];
    int ret =0;
    char server[100];
    printf("======================== WEL-COME TO CHAT APP ================\n");

    // while(1)
    // {

    //     printf("Me : ");
    //     scanf("%s",server);
    //     //send(cfd,server,strlen(server),0);
    //     if(ret = send(cfd,server,strlen(server),0)<0)
    //     {
    //         perror("msg not send\n");
    //         close(sfd);
    //         close(cfd);
    //         exit(7);

    //     }
    //     // recv(cfd,buff,sizeof(buff),0);
    //     if((ret= recv(cfd,buff,sizeof(buff),0))<0) 
    //     {
    //         perror("Data not received \n");
    //         close(cfd);
    //         close(sfd);
    //         exit(6);
    //     }
    //     else{
    //         printf("Friend : %s\n",buff);
    //     }

    // }

    while(1)
    {
         // recv(cfd,buff,sizeof(buff),0);
        if((ret= recv(cfd,buff,sizeof(buff),0))<0) 
        {
            perror("Data not received \n");
            close(cfd);
            close(sfd);
            exit(6);
        }
        else{
            printf("Friend : %s\n",buff);
        }

        printf("Me : ");
        scanf("%s",server);
        //send(cfd,server,strlen(server),0);
        if(send(cfd,server,ret,0)<0)
        {
            perror("Msg not send\n");
            close(sfd);
            close(cfd);
            exit(7);

        }
       

    }

close(sfd);
close(cfd);

    return 0;
}
