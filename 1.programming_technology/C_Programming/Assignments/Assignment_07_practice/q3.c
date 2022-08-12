//Write a program to convert a given character to uppercase
#include<stdio.h>
char input()
{
	char a;
	printf("Enter the character in lower case=");
	scanf("%c",&a);
	return a;
}
char convert(char a)
{
	char c;
	if(a>=92 && a<=122)
	{
	c=a-32;	
	}
	if(a>=65 && a<=90)
	{
	c=a+32;	
	}
	return c;
}

int main()
{
	char a=input();
	char c=convert(a);
	printf("Given character in uppercase =%c\n",c);
	return 0;
}	
