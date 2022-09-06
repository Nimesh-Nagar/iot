#include<stdio.h>


int main(){
	int a;
	int b;
	int c;

	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter Second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);


	if( a > b){ // 0 is false and other values are true
		if( a > c){
			printf("%d is greater\n",a)
		}	
	}else{
		if(b > c){
			printf("%d is greater\n",b)			
		}else{
			printf("%d is greater\n",b)			
		}
	}
	return 0;
}
