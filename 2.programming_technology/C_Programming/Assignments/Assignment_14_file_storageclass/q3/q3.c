/*Q3 & 4.Try Writing structure variable to the file and read structure variable from file.
Student{
	int prn;
	char name[100];
}*/

#include<stdio.h>
int main()
{
	FILE *store_struct = fopen("store_struct.txt","r+");
	
	
	struct Student
	{
		int prn;
		char name[100];
	};
	
	struct Student s1[10];
	printf("Enter prn=");//here we have wrote one data member at a time to the file 
	scanf("%d",&s1->prn);
	fprintf(store_struct,"var=%d\n",s1->prn);
	fscanf(store_struct,"%d",&s1->prn);
	printf("s1->prn=%d\n",s1->prn);
	
	printf("Enter Name=");
	scanf("%s",&s1->name);
	fprintf(store_struct,"var=%s\n",s1->name);
	fscanf(store_struct,"%s",&s1->name);
	printf("s1->prn=%s\n",s1->name);
	return 0;
}

/*
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
	printf("*******************************************\n");
	//Syntax:- size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
	
	fwrite(&s1,sizeof(s1),1,store_struct);
	/*here we have passed the whole structure at a time
	1) &s1=it the varibale of struct Student data type
	2) sizeof(s1)= s1 is varibale of struct type an using sizeof we will get the total memory size required for the structure
	3) 1= data to be written byte by byte
	4) store_struct = file pointer points to where to write the data */
	
	int *x = malloc(sizeof(struct Student));
	/* we have written the sturcture to the file and to read the struct we need to allocate memory of we try to read it w/o allocatrion we will get 0 bcoz when we wrote the struct to file all the data is in binary and cannot be read from it so we allocate the memory and then read from that location*/
	
	fread(x,sizeof(x),1,store_struct);
	/*here we are reading the data from the heap heap memory allocated to the struct.were x has the base address of the structure*/
	printf("&x=%p\n",&x);//dynamic memory base address
	printf("Sizeof x=%ld\n",sizeof(x));//8 bytes as it is address
	printf("Prn=%d\nName=%s\n",s1->prn,s1->name);
	
	printf("*******************************************\n");
	
	printf("&prn=%p\n",&s1->prn);//
	printf("Sizeof prn=%ld\n",sizeof(s1->prn));
	printf("&name=%p\n",&s1->name);
	printf("Sizeof name=%ld\n",sizeof(s1->name));//10 bytes as we have char array of size 10
	
	printf("*******************************************\n");
	
	/*int offset_prn = offsetof(struct student,prn);
	printf("Offset of prn from base address=%d",offset_prn);
	int offset_name = offsetof(struct Student, name);
	printf("Offset of name from base address=%d",offset_name);*/
	
	
	
		
	fclose(store_struct);
	return 0;
}
*/
