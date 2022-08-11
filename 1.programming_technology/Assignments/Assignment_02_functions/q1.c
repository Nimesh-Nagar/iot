// Write a program to print "Hello World" using escape sequences: \n, \t, \r, \.  Observe the difference in the output.

#include<stdio.h>
int print()
{
    printf("Hello World\n");
    printf("Hello \tWorld\n");
    printf("Hello \rWorld\n");
    printf("Hello World\n");
}    
 
int main()
{
	int a= print();   
   
return 0;
}
