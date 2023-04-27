final_out: main.o sum.o mul.o
	gcc main.o sum.o mul.o -o final_out

main.o: main.c sum.h mul.h 
	gcc main.c -c

sum.o: sum.c
	gcc sum.c -c

mul.o: mul.c
	gcc mul.c -c

clean:
	rm *.o final_out

run:
	./final_out

#make - generate object file
#make run #to run final object file (output)
#make clean - clean/remove all the .o extension and output file