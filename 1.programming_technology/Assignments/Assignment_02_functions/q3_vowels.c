// check for vowels

#include<stdio.h>

char input()		// input function..
	{
		char ch;				
		printf("Enter the alphabet");
		scanf("%c",&ch);
		return ch;	
	}
 
 void vowel(char ch)		// function to check the alphabet is vowel or not.
	{
		if(ch =='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u')
			{
				printf("Alphabet is vowel");			
			
			}
		else{
				printf("Alphabet is not a vowel");
		
		}	
			
	}

int main()		// main function.
{	
	char ch = input();	//calling input function
	vowel(ch);		// calling vowel function
	
	return 0;
}
