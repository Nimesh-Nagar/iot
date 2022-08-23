import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)
led=4
GPIO.setmode(GPIO.BCM) # GPIO.BOARD
GPIO.setup(led, GPIO.OUT)
for i in range(10):
	GPIO.output(led, GPIO.HIGH)
	print("LED is ON")
	time.sleep(2)
	GPIO.output(led, GPIO.LOW)
	print("LED is OFF")
	time.sleep(2)
GPIO.cleanup()
