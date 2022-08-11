//reversing a string in memory

#include<stdio.h>

void rev(char *str)
{	
	int len = 0, temp;
	int i = 0, j = 0;
	
	
	while(str[i] != '\0')
	{
	
		i++;
		
	}
	len = i - 1;
	while(j < len)
	{
		temp = str[j];
		str[j] = str[len];
		str[len] = temp;
		j++;
		len--;
	}
	
}

int main()
{
	char str[100];
	printf("Enter String=");
	scanf("%s",str);
	rev(str);
	
	printf("Reverse String is = %s\n",str);
	return 0;
	
}





