#include<stdio.h>

// function to compair if both strings are same or not

int str_compair(char str1[], char str2[]){
    int i;
    for(i=0; str1[i]==str2[i]; i++){
        if(str1[i]=='\0'){
            return 0;
        }
    }
    return (str1[i]-str2[i]);
}

int main()
{
    char str1[20],str2[20];
    printf("Enter first string --> ");
    gets(str1);
    printf("Enter second string --> ");
    gets(str2);

    int res = str_compair(str1,str2);
    if(res == 0){
        printf("Strings are SAME \n");
    }
    else{
        printf("Strings are DIFFERENT \n");
    }
    
    return 0;
}