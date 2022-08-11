output: main.o sum.o mul.o
	gcc main.o sum.o mul.o -o output
main.o: main.c sum.h mul.h
	gcc main.c -c
sum.o: sum.c
	gcc sum.c -c
mul.o: mul.c
	gcc mul.c -c
clean:
	rm *.o output
run:
	./output
#make - generate object file
#make run #to run final object file (output)
#make clean - clean/remove all the .o extension and output file
