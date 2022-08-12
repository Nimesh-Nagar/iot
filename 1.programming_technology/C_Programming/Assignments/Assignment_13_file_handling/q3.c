// 3.Write a program to write your name and prn and dob into the file in given format {101|sid|10.2.1994}

#include<stdio.h>

int main()
{
	FILE *fp = fopen("q3.txt","r+");
	int prn;
	char name[20];
	int dd,mm,yyyy; 
	
	printf("Enter PRN number : ");
	scanf("%d",&prn);
	fscanf(fp,"%d",&prn);
	
	printf("\nEnter your Name :  ");
	scanf("%s",name);
	fscanf(fp,"%s",name);
	
	printf("\nEnter date of birth (dd.mm.yyyy): ");
	scanf("%d%d%d",&dd,&mm,&yyyy);
	fscanf(fp,"%d%d%d",&dd,&mm,&yyyy);
	
	fprintf(fp,"Student details --> %d | %s | %d.%d.%d ",prn,name,dd,mm,yyyy);
	
	//fputs("101|Nimesh|22.02.1995",fd);	
	fclose(fp);	

	
	
	return 0;
} 
