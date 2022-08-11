#This makefie is good to use at first instance
targetoutput: mainbusinesslogic.o
#gcc -o targetoutput -L . libaddsub.so mainbusinesslogic.o
	gcc mainbusinesslogic.o -laddsub -o targetoutput
#shared LIBRARY IS CREATED
libaddsub.so: addTwoNumbers.o subTwoNumbers.o
	gcc -shared -o libaddsub.so addTwoNumbers.o subTwoNumbers.o
mainbusinesslogic.o: mainbusinesslogic.c addsub.h
	gcc -c mainbusinesslogic.c
addTwoNumbers.o: addTwoNumbers.c
	gcc -fPIC -c addTwoNumbers.c
subTwoNumbers.o: subTwoNumbers.c
	gcc -fPIC -c subTwoNumbers.c
clean:
	rm *.o targetoutput
run:
	./targetoutput
copyheader:
	sudo cp addsub.h /usr/include
copylib:
	sudo cp libaddsub.so /usr/lib
runldconfig:
	sudo ldconfig
