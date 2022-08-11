#to generate libcal.a
#ar rs libcal.a add.o sub.o mul.o div.o
targetoutput: calculator.o libcal.a
	gcc -o targetoutput -L . calculator.o -lcal
#gcc -o targetoutput calculator.o  -libbasic.a
libcal.a: add.o mul.o sub.o div.o
	ar rs libcal.a add.o mul.o sub.o div.o
calculator.o: calculator.c basic-header.h
	gcc -c calculator.c
add.o: add.c
	gcc add.c -c
sub.o: sub.c
	gcc sub.c -c
mul.o: mul.c
	gcc mul.c -c
div.o: div.c
	gcc div.c -c
clean:
	rm *.o targetoutput
run:
	./targetoutput
