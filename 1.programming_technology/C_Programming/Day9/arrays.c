#include<stdio.h>

int main(){
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 40;

	printf("arr = %x(Hex) %lu(Long int)   Size = %d \n", arr,arr, sizeof(arr));
	printf("&arr = %x(Hex) %lu(Long int) Size = %d \n", &arr,&arr,sizeof(&arr));
	printf("*(&arr) = %x(Hex) %lu(Long int) Size = %d \n", *(&arr),*(&arr),sizeof(*(&arr)));
	printf("*arr = %x(Hex) %lu(Long int) Size = %d \n", *arr,*arr,sizeof(*arr));
	
	printf("&arr + 1 = %x(Hex) %lu(Long int)\n",&arr +  1, &arr +1)	;
	printf("arr + 1 = %x(Hex) %lu(Long int)\n", arr +  1, arr +1)	;

	
	printf("Subscript Operator Notation : \n");
	printf("arr[0] = %d\n",arr[0]);
	printf("arr[1] = %d\n",arr[1]);
	printf("arr[2] = %d\n",arr[2]);

	printf("\nArray pointer notation : \n")	;
	printf("*(arr + 0) = %d\n",*(arr + 0));
	printf("*(arr + 1) = %d\n",*(arr + 1));
	printf("*(arr + 2) = %d\n",*(arr + 2));


	return 0;
}	
