/*
    Producer : Write the message to the queue
*/
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
/*
structure for message queue - to be used by msgsnd
This is user define but format should be used as below
*/
struct mesg_buffer
{
    long mesg_type;
    char mesg_text[100];
} message;
int main()
{
    key_t key;
    int msgid;
    //ftok to generate unique key
    key = ftok("testfile",50);  //this value should be same for both read and write
                                //to generate the same key
    /*
        Creates a ms queue if not exists
    */
    msgid = msgget(key,0666 | IPC_CREAT);
    message.mesg_type = 1;
    printf("writre some data into Queue\n");
    scanf("%[^\n]s",message.mesg_text);

    /*
        Send the data to the Queue 
    */
   msgsnd(msgid,&message,sizeof(message),0);

   printf("Message sent to queue: %s\n",message.mesg_text);
   return 0;
}
