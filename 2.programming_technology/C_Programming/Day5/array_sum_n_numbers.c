#include<stdio.h>

int arr[5]; // global array

/*void input(){
	for(int i = 0 ; i < 5 ;i++){
		printf("Enter some number: ");
		scanf("%d",&arr[i]);
	}
}

void sum(){
	int sum = 0;
	for(int i = 0 ; i < 5 ;i++){
		sum = sum + arr[i];
	}
	printf("sum = %d\n",sum);
}


int main(){
	input();
	sum();

	return 0;	
}

*/





int main(){
	//taking input from user
	for(int i = 0 ; i < 5 ;i++){
		printf("Enter some number: ");
		scanf("%d",&arr[i]); // 10 20 30 40 50
 				     //  0  1  2  3 4
	}

	int sum = 0;
	for(int i = 0 ; i < 5 ;i++){
		sum = sum + arr[i];//i = 0 sum = 0 + 10 = 10
				  // i = 1 10 + 20 = 30
				  // i = 2 30 + 30 = 60
				  // i = 3 60 + 40 = 100
				  // i = 4 100 + 50 = 150 
	}
	printf("sum = %d\n",sum);


	return 0;
}













