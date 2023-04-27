#include<stdio.h>
#include<string.h>

void str_concat(char str1[], char str2[]){
    int i=0,j=0;
//Go to end of first string
    while(str1[i]!='\0'){   
        i++;
    }
    printf("index of s1 : %d \n",i);
//now add second string at the end of first string 
    while(str2[j] != '\0' ){
        str1[i]=str2[j];
        i++;
        j++;
    }
    printf("val str1 %s \t",str1);
    printf("val str2 %s \n",str2);
}

int main()
{
    char str1[20], str2[20];
    printf("Enter String S1 : ");
    gets(str1);
    printf("Enter String S2 : ");
    gets(str2);

    // strcat(str1,str2);
    str_concat(str1,str2);

    return 0;
}
