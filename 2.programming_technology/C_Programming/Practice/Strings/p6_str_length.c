#include <stdio.h>

unsigned int str_leng(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    return count;
}


int main()
{
    char str[50];
    printf("Enter any string ");
    gets(str);
    unsigned int ans = str_leng(str);
    printf("length if string is %u \n",ans);
    return 0;
}