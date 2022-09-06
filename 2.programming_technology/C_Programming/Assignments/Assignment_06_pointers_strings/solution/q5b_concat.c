//Q5.Define your own iterative functions for
//(using array notation as well as exclusively using pointers)

#include<stdio.h>


void concat(char *str1, char *str2, char *str3)
{
	int i = 0, j = 0;
	while(str1[i] != '\0')
	{
		str3[j] = str1[i]; 
		i++;
		j++;
	}
	i=0;
	
	while(str2[i] != '\0' )	
	{
		str3[j]= str2[i];
		i++;
		j++;
	}
	str3[j] = '\0'; 
}

int main()
{
	char str1[50], str2[50], str3[100];
	
	printf("Enter 1st string=");
	scanf("%s",str1);
	
	printf("Enter 2nd string=");
	scanf("%S",str2);
	
	concat(str1,str2,str3);
	printf("Concat string is=%s\n",str3);
	

	return 0;
}


