/*
    Consumer : Read the message from the queue
*/
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
/*
structure for message queue - to be used by msgrcv
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
    key= ftok("testfile",50);
    msgid = msgget(key,0666 | IPC_CREAT);
    msgrcv(msgid, &message,sizeof(message),1,0); //last argument (0) caller process will wait 
    printf("The message received from Producer : %s\n",message.mesg_text);
    //Destroy message queue
    msgctl(msgid, IPC_RMID, NULL);
    return 0;
}
