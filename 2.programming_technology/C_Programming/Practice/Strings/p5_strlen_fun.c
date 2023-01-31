#include <stdio.h>
#include <string.h> //to manupulate string

int main()
{
    char str[50];

    printf("Enter any string ");
    fgets(str,sizeof(str),stdin);

    printf("Length of string is %d \n ",strlen(str));

    return 0;

}

/* 
strlen(char string) returns length of string without null character.     
    Enter name : Deepak
    Deepak Srivastava
*/