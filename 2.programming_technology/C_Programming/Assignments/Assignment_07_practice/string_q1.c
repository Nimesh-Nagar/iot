#include<stdio.h>

//a. To Finding length of String
int str_len(char* str)
{
	int len=0, i=0;
	
	while(str[i] != '\0')
	{
		len++ ;
		i++ ;
	}
	return i;
}

//c. Concatiation 
void concat(char *str, char *str2, char* concat_str)
{
	int i=0, j=0;
	while(str[i] != '\0')		// inserting 1st string into temp string
	{
		concat_str[j] = str[i];
		i++; 
		j++;
	}
	
	i=0;
	while(str2[i] != '\0')
	{
		concat_str[j] = str2[i];
		i++; 
		j++;
	}
		
	concat_str[j] = '\0';
	
}

int str_comp(char *str, char *str2)
{
		int i=0;
		while(str[i] == str2[i]){
			if(str[i] == '\0' && str2[i] == '\0')
			{
				return 1;
			}
			i++;
		}
		return 0;
		
}

// fun for first occurance


int main()
{
	char str[50];
	char str2[50];
	char concat_str[50];
	
	
	printf("Enter String: " );
	scanf("%s",str);
	printf("Enter another String: " );
	scanf("%s",str2);
		
	// length of string	
	int len = str_len(str);
	printf("length of string is %d \n",len);
	
		
	// concatination 
	concat(str,str2,concat_str);
	printf("Concatination of 2 strings is %s\ns",concat_str);
	
	
	//comparison
	int valid = str_comp(str,str2);
	
	if(valid){
		printf("same \n");
	}
	else{
		printf(" Do not match\n");
	}
	
	//char input
	char ch;
	printf("Enter character: ");
	scanf("%c",&ch);

			
	return 0;
	
}
