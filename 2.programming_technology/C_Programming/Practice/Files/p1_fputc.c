/*
    functions used for I/O are 
    Character I/O : fputc(), fgetc(), putc(), getc()
    String I/O : fgets(), fputs()
    Fromatted I/O : fscanf(), fprintf()
    Record I/O : fread(), fwrite()
*/


// use fputc Function
/*
dec. : int fputc(int c, FILE *fptr);
write char to specified file at the current file position and then increments the file pointer indicatior.
ON SUCCESS it returns an integer representing the character written, and ON ERROR it returns EOF.
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    int ch;
    
    if((fptr=fopen("myfile","w")) == NULL)
    {
        printf("error in opening file \n");
        exit(1);

    }
    printf("Enter text : ");
// press ctr+c/  "ctr+d for LINUX USER" to stop reading characters 
    while((ch=getchar())!=EOF)
    {
        fputc(ch,fptr);
    }
    fclose(fptr);

    return 0;
}