/*
10 bit Channel - PWM
PWM_CHANNEL_0 - Board PIN - 32 , BCM - 12, WiringPI - 26
#PWM_PIN_OUTPUT is always digital
PWM Channel = 10 bit - 1024
Compile: gcc PWM_Program.c -o pwm.out -lwiringPi
sudo ./pwm.out
Note : connect yourt LED with GPIO PIN 12 BCM and 32 of Board PIN (PWM0)
Detailed : https://pinout.xyz
*/
#include <wiringPi.h>
#include <stdlib.h>
#include <stdio.h>
const int PWM_PIN = 26;   // As per WiringPI - BCM 12
int main()
{
	int intensity;
	if(wiringPiSetup () == -1)
	{
		exit(1);
	}
	pinMode(PWM_PIN, PWM_OUTPUT);
	while(1)
	{
		for(intensity = 0; intensity < 1024; ++intensity)
		{
			pwmWrite(PWM_PIN,intensity);
			delay(100);
		}
				
		delay(2);
		for(intensity = 1023; intensity >=0; --intensity)
		{
			pwmWrite(PWM_PIN, intensity);
			delay(100);
		}
	}
		return 0;
}
		


