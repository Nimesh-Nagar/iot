#include<stdio.h>

int main(){
	FILE *fd = fopen("calc.txt","r+");
	int a,b;
	fscanf(fd,"%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	fprintf(fd,"Sum is : %d\n",a+b);
	
	return 0;
}
