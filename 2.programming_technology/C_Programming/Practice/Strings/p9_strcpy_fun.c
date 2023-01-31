#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10],str2[10];
    printf("Enter a string ");
    scanf("%s",str2);
    strcpy(str1,str2); // copies content of str2 in str1 

    printf("String Second (str2) is : %s  |  String First (str1) is : %s \n",str2, str1);
 
    return 0;
}