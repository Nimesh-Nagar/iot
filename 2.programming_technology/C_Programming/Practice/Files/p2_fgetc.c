/* use of fgetc() functionn

declaration: int fgetc(FILE *ptr)

Reads single character form file and increment the file position indicator. 

*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    int ch;

    if((fp = fopen("myfile","r"))==NULL)
    {
        printf("Error in opening the file \n");
    }
    
    while((ch=fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);    
    
    
    return 0;

}
