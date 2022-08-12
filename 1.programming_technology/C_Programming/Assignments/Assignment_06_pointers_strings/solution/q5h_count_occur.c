#include<stdio.h>

int occurence(char *str, char ch)
{
	int i = 0 , pos=0;
	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			pos++;
			
		}
		i++;
	}return pos;
	

}


int main()
{
	char str[100];
	char ch = 'g';
	printf("Enter string=");
	scanf("%s",str);
	
	int pos = occurence(str,ch);
	printf("Entered character occured at index=%d\n",pos);	
		
	return 0;
}
	
	
