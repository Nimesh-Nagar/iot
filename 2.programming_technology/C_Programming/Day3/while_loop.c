#include<stdio.h>

int main(){
	int num;
	printf("Enter some number :");
	scanf("%d",&num);
	int i;
	while( i <= 10){
		printf("%d\n",i*num);
		i++;
	}	

	return 0;
}
