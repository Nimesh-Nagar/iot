#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>
#define GPIO_PIN_4 4
int main()
{
	printf("test entry\n");
	wiringPiSetupGpio();
	pinMode(GPIO_PIN_4,OUTPUT);
	printf("test\n");
	while(1)
	{
		digitalWrite(GPIO_PIN_4,HIGH);
		printf("Led is ON\n");
		sleep(10);
		digitalWrite(GPIO_PIN_4,LOW);
		printf("led is Off\n");
		sleep(10);
	}
	return 0;
}
