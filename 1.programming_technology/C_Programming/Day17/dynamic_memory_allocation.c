#include<stdio.h>
#include<stdlib.h>


struct Student{
	int prn;
	char name[100];
};

int main(){
	void * p = malloc(sizeof(int));
	struct Student *pt= malloc(sizeof(struct Student));
	
	scanf("%d",p);
	scanf("%d",&pt->prn);
	scanf("%s",pt->name);

	printf("p = %d\n",*(int*)p);
	printf("pt->name = %s\n",pt->name);

	//int* x = calloc(sizeof(int),10);
	int *x = malloc(10 * sizeof(int));
	x[0] = 10;
	x[1] = 20;
	struct Student *std = calloc(sizeof(struct Student),100);
	//std[0].prn
	x = realloc(x,100*sizeof(int))
	free(x);
	return 0;
}
