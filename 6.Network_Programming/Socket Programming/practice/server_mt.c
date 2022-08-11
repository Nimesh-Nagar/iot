#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

char client_msg[2000];
char buffer[2000];
int clintno;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;




int main(int argc, char const *argv[])
{
    if (agrc < 2)
    {
		printf("Usage: %s <port_no>\n", argv[0]);
		exit(1);
	}



    return 0;
}
