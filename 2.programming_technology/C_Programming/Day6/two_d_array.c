#include<stdio.h>


int main(){
	int arr[3][3];
	int row=0,col=0;
	for(row = 0 ; row < 3 ; row++){
		for(col = 0 ; col < 3 ; col ++){
			printf("Enter row= %d and col= %d :",row,col);
			scanf("%d",&arr[row][col]);
		}
	}


	for(row = 0 ; row < 3 ; row++){
		for(col = 0 ; col < 3 ; col ++){
			printf("(row= %d,col = %d) -> %d \n",row,col,arr[row][col]);
		}
	}


	return 0;
}














