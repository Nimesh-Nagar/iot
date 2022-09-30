#include<stdio.h>

int arr[5];

void input(){
	for(int i = 0 ; i < 5 ; i++ ){
		printf("Enter some number:")
		scanf("%d",&arr[i]);			
	}


}
void sum(){
	int sum = 0;
	for(int i = 0 ; i < 5 ; i++){
		sum = sum + *(arr + i);
	}
	printf("Sum is  : %d \n",sum);
}	
/*
*arr
*(arr + 1)
arr[0]=> *arr = *(arr + 0)
arr[1] => *(arr + 1)

*/
int main(){
	input();
	sum();
	return 0;
}
