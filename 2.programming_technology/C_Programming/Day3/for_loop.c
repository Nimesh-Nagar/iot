#include<stdio.h>

int main(){
	int num;
	printf("Enter some number :");
	scanf("%d",&num);
	int i;
	for( i = 1;i <= 10 ; i++){
		printf("%d\n",i*num); //i = 1 4
				      //i = 2 8
				      //i = 3 12
	}
	return 0;
}
