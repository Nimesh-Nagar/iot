/* 4.Try storing a structure into the file
Student{
	char name[100];
	int prn
}	*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *store_struct = fopen("store_struct.txt","r+");
	
	
	struct Student
	{
		int prn;
		char name[10];
	};
	
	struct Student s1[10];
	printf("Enter prn=");
	scanf("%d",&s1->prn);
	
	printf("Enter Name=");
	scanf("%s",s1->name);
	printf("\n");
	
	fwrite(&s1,sizeof(s1),1,store_struct);      //writing structure to the file
	
	int *x = malloc(sizeof(struct Student));    //Allocating dynamic memory
	
	fread(x,sizeof(x),1,store_struct);
	printf("Data read from file \n");
	printf(" Prn = %d\n Name = %s\n",s1->prn,s1->name);
	
	
	fclose(store_struct);
	return 0;
}	
