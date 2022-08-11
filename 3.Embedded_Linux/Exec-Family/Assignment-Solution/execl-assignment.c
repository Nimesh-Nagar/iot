#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	int number;
	printf("Enter number 1 or 2\n");
	scanf("%d",&number);
	if(number == 1)
	{
		execl("/usr/bin/python3","python3","pythonadd.py", NULL);
	}
	else if (number == 2)
	{
	 	const char *command = "gcc subtract.c -o subtract";
	 	system(command);
		system("./subtract");
	}
	
	return 0;
}	
	
