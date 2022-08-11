//6.Read /proc/cpuinfo file.Print whole file on terminal

#include<stdio.h>
#include<unistd.h>

int main()
{
	
	FILE *cpuinfo = fopen("/proc/cpuinfo","r");
	char store_data[1000];
	
	while(1)
	{
		fgets(store_data, 100, cpuinfo);
		
		printf("Data read from file = %s\n",store_data);
	
		sleep(1);//it will read data after interval of 1sec
		
	}
	return 0;
}

