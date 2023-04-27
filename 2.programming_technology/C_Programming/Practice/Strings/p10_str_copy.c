#include<stdio.h>
 
char str_copy(char str1[], char str2[] ){
    int i = 0;
    while( (str1[i]=str2[i]) != '\0' ){
        i++;
    }
    printf("After Copy Str 1 = %s | Str2 = %s \n" ,str1,str2);
    // return str1;
}

int main()
{
    char str1[10],str2[10];
    printf("Enter a string: ");
    scanf("%s",str2);

    printf("Before copy ");
    printf("Str1 : %s  | Str2 : %s \n",str1,str2);
    str_copy(str1,str2);

     // char ret = str_copy(str1,str2);
    // printf("After Copy Str 1 = %s" ,ret);

    return 0;
}