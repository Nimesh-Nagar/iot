#include<stdio.h>

int main(){
	int num;
	printf("Enter some number :");
	scanf("%d",&num);
	int i=0;
	do{
		i++;
		printf("%d\n",i*num);
		
	}while( i <= 10);	

	/*while(i <= 10){
		printf("%d\n",i*num);
		i++;
	}*/



	return 0;
}
