#include<stdio.h>
#include <unistd.h>

int main(){
	FILE *fd = fopen("/proc/loadavg","r");
	char data[100];
	while(1){
		fgets(data,30,fd);
		printf("Current system usage : %s\n",data);
		rewind(fd);
		sleep(1);
	}
	return 0;
}
