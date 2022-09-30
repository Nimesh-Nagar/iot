#include<stdio.h>
#include"string_opr.h"
int main(){
	char str[100];
	char str2[100];
	char concat_str[100];
	char ch;
	//Input
	printf("Enter string :" );
	scanf("%s",str);
	printf("Enter string 2 : ");
	scanf("%s",str2);

	int len = str_len(str);
	printf("Length of string %s = %d\n", str,len);
	
	//concatination
	concat(str,str2,concat_str);
	printf("Concat String :%s\n",concat_str);

	//Compare
	int valid = str_cmp(str,str2);
	if(valid){
		printf("%s and %s are same\n",str,str2);
	}else{
		printf("%s and %s are not same\n",str,str2);
	}
	
	//Char input
	printf("Enter char input :");
	scanf("%c",&ch);
	scanf("%c",&ch);

	int index = str_find_first(str,ch);
	printf("First Occurance of %c in %s is %d\n",ch,str,index);


	index = str_find_last(str,ch);
	printf("Last Occurance of %c in %s is %d\n",ch,str,index);


	index = str_find_all(str,ch);
	printf("All Occurance of %c in %s is %d\n",ch,str,index);




	

}










