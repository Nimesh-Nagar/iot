#Contributed by - DIoT, March -2022 (Payal and Vishwajeet)
output:	thread1.o routine1.o routine2.o 
	gcc thread1.o routine1.o routine2.o -lpthread -o output
thread1.o:	thread1.c routine1.h routine2.h
	gcc thread1.c -c
routine1.o:	routine1.c
	gcc routine1.c -c
routine2.o:	routine2.c
	gcc routine2.c -c
clean:
	rm *.o output
run:
	./output