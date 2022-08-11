// Q5. Write a program to implement display and reverse display function character array.


#include<stdio.h>

char arr[5];	// global declaration

void input(){
	
	for(int i=0;i<5;i++){
		printf("Enter character value for array = ");
		scanf("%c",&arr[i]);
	}
	
}

void rev(){
	
	printf("Reversed array = ");
	for(int i=5-1;i>=0;i--){
		printf("%c\t",arr[i]);
	}
	
}	
	
int main(){
	char a,b;
	input();
	
	rev();
		
	return 0;
}	
