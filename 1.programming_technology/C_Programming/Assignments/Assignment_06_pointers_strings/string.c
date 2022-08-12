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

//b. Comparison of strings
int str_compare(char *name, char *other)
{
	int i=0;
	while(name[i] != '\0')
	{
		if(name[i] != other[i])
		{
			break;
		}
		i++; 
	}
	if(name[i]=='\0' && other[i]=='\0')
		return 1;
	return 0;

}

//c. Concatiation 
void concat(char *name, char *other)
{
	int i=0, j=0;
	char temp[100];
	while(name[i] != '\0')		// inserting 1st string into temp string
	{
		temp[j] = name[i];
		i++; 
		j++;
	}
	
	i=0;
	while(other[i] != '\0')
	{
		temp[j] = other[i];
		i++; 
		j++;
	}
		
	printf("concatination %s \n",temp);
	
}

//d. Reversing in Memory
void rev(char *name, int l)
{
	int temp, a=0, b=l-1;
	
	while(a<b)
	{
	temp = *(name+a);
	*(name+a) = *(name+b);
	*(name+b) = temp;
	a++;
	b--;
	}
	
}

void first(char *a, char ch)
{
	int i=0, 
	int pos=-1;
	
	while(a[i] != '\0')
	{
		if(a[i] == ch)
			pos==i;
			pos++;
			break;
	}
	i++;
	
	return i;
}


int main()
{
	char name[50];
	char other[50];
	char first[50];
	
	
	printf("Enter String: " );
	scanf("%s",name);
	printf("Enter another String: " );
	scanf("%s",other);
	
// fun call  for
	
	// length of string	
	int len = str_len(name);
	printf("length of string is %d \n",len);
	
	// Comparison of strings
	int comp = str_compare(name,other);
	if(comp == 1)
		printf("String Matched");
		
	else
		printf("String do not Matched \n");	
		
	// concatination 
	concat(name,other);
	
	//Reverse
	int l = str_len(name);
	rev(name,l); 	//using length of string
	printf("Reversed String is : %s\n",name);
	rev(name,l);
	
	//First Occurance
	printf("Enter String: " );
	scanf("%s",first);
	printf("Enter character to find first: %c \n",c);
	int r = first(char *a ,char ch);
	printf("%d",r);
	
	
	
	
	
		
		
		
		
		
		
	return 0;
	
}
