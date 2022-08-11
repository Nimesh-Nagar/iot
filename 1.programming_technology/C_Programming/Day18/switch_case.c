#include<stdio.h>

int main(){
	//pattern match
	int ch;
	printf("Enter day of week: \n");
	scanf("%d",&ch);

	switch(ch){
		case 1: printf("Monday\n");
	
		case 2: printf("Tuesday\n");
	
		case 3: printf("Wednesday\n");
			break;
		default : printf("Wrong option\n");
	}
	return 0;
}
