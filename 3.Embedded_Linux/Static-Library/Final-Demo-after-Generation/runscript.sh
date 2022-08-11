#!/bin/bash
gcc -c calculator.c
gcc -o targetoutput calculator.o -L . -lcal
./targetoutput
rm calculator.o targetoutput
