import RPi.GPIO as GPIO	 #RaspberryPI GPIO function
from time import sleep   #sleep from time
GPIO.setwarnings(False)  #Disable warning 
GPIO.setmode(GPIO.BCM)   #SET BOARD MODE - BOARD/BCM
PIN_NUMBER = 4  #GPIO_PIN on which LED is going to be connected
GPIO.setup(PIN_NUMBER, GPIO.OUT, initial=GPIO.LOW) #last parameter is optional  
while True:
	GPIO.output(PIN_NUMBER, GPIO.HIGH) #Signal High
	print("LED is Turn On")
	sleep(1)
	GPIO.output(PIN_NUMBER, GPIO.LOW) #Signal Low
	print("LED is Off")
	sleep(1)
