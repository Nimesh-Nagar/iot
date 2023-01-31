
#include<stdio.h>
int main()
{
    char str[]="India";
    for(int i=0; str[i]!=0; i++)
    {
        printf("Character = %c\t",str[i]);
        printf("Address = %p\n",&str[i]);
    }

    return 0;
}