//5.Read /proc/loadavg file and print on terminal
#include<stdio.h>
#include<unistd.h>//foor sleep fucntion

int main()
{
	
	FILE *load = fopen("/proc/loadavg","r");
	char store_data[100];
	
	while(1)
	{
		fgets(store_data, 50, load);
	 
		printf("Data read from file = %s\n",store_data);
		rewind(load);//after reading each line we should rewind the cursor loaction so as to read from the 1st char of next line.
		sleep(1);//it will read data after interval of 1sec
		
	}
	return 0;
}

