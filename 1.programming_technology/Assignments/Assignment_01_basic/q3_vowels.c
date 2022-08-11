// Write a C program to find out given character is vowel or not

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter an Alphabet : ");
	scanf("%c",&ch);

	if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
		printf("\n %c is a Vowel",ch);
		}
	else{
		printf("\n %c is not a Vowel",ch);
		}

return 0;	
}
