#include<stdio.h>

char input(){
	char ch;
	printf("Enter an alphabet : \n");
	scanf("%c",&ch);
	return ch;
}

void validate_vowel(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i'){
		printf("%c is vowel\n", ch);
	}
	else{
		printf("%c is not vowel\n",ch);
	}
}


int main(){
	char ch = input();
	validate_vowel(ch);

	return 0;
}
