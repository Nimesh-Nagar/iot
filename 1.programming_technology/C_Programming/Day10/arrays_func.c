#include<stdio.h>


void square(int* x){ // 1000 => 4 BYTES Block
	for(int i = 0; i < 5; i++){
//		x[i] = x[i] * x[i];
		*(x + i) = *(x + i) * *(x + i);
	}

}	


void square_arr(int* x){
	for(int i = 4; i >=0; i--){
		*(x - i) = *(x - i) * *(x - i);
	}	
}



int main(){
	int arr[5] = {10,20,30,40,50}; // 1000
	square_arr(&arr+1);  // 1000 = 20 BYTES BLOCK
	for(int i = 0 ; i < 5;i++){
		printf("%d\n",arr[i]);
	}
}
