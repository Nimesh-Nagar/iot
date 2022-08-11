#include<stdio.h>

void factorial(int n){
	int fact =1;
	for(int i=1;i<=n;i++){
		fact *=i;
		}
	printf("factorial is = %d\n",fact);		
	
}

int main(){

	int n,fact =1;
	printf("Enter the number: ");
	scanf("%d",&n);
	factorial(n);
	

	return 0;
}
