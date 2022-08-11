#include<stdio.h>

int main(){
	int arr[3][3][3];
	int row=0,col=0,depth=0;
	for(row = 0 ; row < 3 ; row++){
		for(col = 0 ; col < 3 ; col ++){
			for(depth = 0 ; depth < 3 ; depth ++){
				printf("Enter row= %d and col= %d and depth = %d :",row,col,depth );
				scanf("%d",&arr[row][col][depth]);
			}
		}
	}


	for(row = 0 ; row < 3 ; row++){
		for(col = 0 ; col < 3 ; col ++){
			for(depth = 0 ; depth < 3 ; depth ++){
			 	printf("(row= %d,col = %d,depth = %d) -> %d \n",row,col,depth,arr[row][col][depth]);
			}
		}
	}


	return 0;
}














