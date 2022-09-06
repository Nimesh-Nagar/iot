#include<stdio.h>
int str_len(char* str){
	int i= 0;
	while(str[i] != '\0'){
		i++;	
	}
	return i;
}

void concat(char *str,char *str2, char* concat_str){
	int i =0 , j = 0;
	while(str[i] != '\0'){
		concat_str[j] = str[i];
		i++;
		j++;
	}
	i = 0;
	while(str2[i] != '\0'){
		concat_str[j] = str2[i];
		i++;
		j++;
	}
	concat_str[j] = '\0';
}

int str_cmp(char* str ,char* str2){
	int i = 0;
	while(str[i] == str2[i]){
		if(str[i] == '\0' && str2[i] == '\0'){
			return 1;//valid
		}
		i++;
		
	}
	return 0; // invalid
}

int str_find_first(char* str,char ch){
	int i = 0,pos = -1;
	while(str[i] != '\0'){
		if(str[i] == ch ){
			pos = i;
			return pos;
		}
		i++;
	}	
	return pos;
}


int str_find_last(char* str,char ch){
	int i = 0,pos = -1;
	while(str[i] != '\0'){
		if(str[i] == ch ){
			pos = i;
		}
		i++;
	}	
	return pos;
}

int str_find_all(char* str,char ch){
	int i = 0,pos = -1;
	while(str[i] != '\0'){
		if(str[i] == ch ){
			pos++;
		}
		i++;
	}
	if(pos >=0){
		return pos + 1;
	}	
	return pos;
}




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










