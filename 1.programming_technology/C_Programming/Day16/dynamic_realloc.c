#include<stdio.h>
#include<stdlib.h>

int main(){
	int *x = malloc(sizeof(char));
	printf("Sizeof x : %d\n",sizeof(*x));
	x = realloc(x,sizeof(int)); // Reallocating the memory 1 to 4 bytes
	scanf("%d",x);
	printf("Data : %d, %d\n",*x,sizeof(*x));
	free(x);
	return 0;
}
