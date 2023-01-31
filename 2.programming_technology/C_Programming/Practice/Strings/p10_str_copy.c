#include<stdio.h>
 
char str_copy(char *str1, char *str2 ){
    while( (*str1=*str2) != 0 ){
        str1++;
        str2++;
    }
    return str1;
}

int main()
{
    char str1[10],str2[10];
    char *p1 = str1;
    char *p2 = str2;
    printf("Enter a string ");
    scanf("%s",str2);

    char ret = str_copy(str1,str2);
    printf("After Copy Str 1 = %s" ,ret);

    return 0;
}