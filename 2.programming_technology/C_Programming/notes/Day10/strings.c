#include<stdio.h>




int str_len(char* str ){ // string, return length
//	int len = 0;
	int i = 0;	
	while(str[i] != '\0'){
//		len++;
		i++;
	}

	return i;
}








int main(){
	//array of chars
	//Format Specifier For strings
	char name[100];
	scanf("%s",name);
//	name[2] = 'x';
	printf("%s",name);


	int len = str_len(name);
	printf("\nLength of str %s is %d \n",name,len);
	return 0;
}
