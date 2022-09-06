#include<stdio.h>

int main()
{
	struct student{
		
		int prn;
		char name[20];
		int marks[5];
		
	};

	struct student S1; 	//creating variable of sytudent type
	struct student S2; 	//creating variable of sytudent type
	struct student* pt = &s1;
	// (*pt). => s1. => pt
	
	
	//printf("Enter s1 data");
	//scanf("%d",&pt->prn);
	//scanf("%d",&s1.prn)
		
	struct student std[50];
		
	// Input taken from user
	
	printf("Enter number of student : ");
	scanf("%d",&no_of_std);
		
	for(int i=0;i<no_of_std;i++)
	{
		printf("Enter Student Name : ");
		scanf("%s",std[i].name);
		
		for(int j=0;j<no_of_std;j++)
		{
			printf("Enter Subject Name S%d : ",j);
			scanf("%s",std[j].subject);
		
			printf("Enter Student Name S%d : ",j);
			scanf("%d",&std[j].marks);
	
		}
		
	}
	
	//Printing student Detalis
	
	for(int i=0;i<2;i++)
	{
	printf("Student name S %d : %s ",i,std[i].name);
	}
		for(int j=0;j<2;j++)
		{
		printf("Enter Student Name S%d : %s ",j,std[j].subject);
		
		printf("Enter Student Name S%d : %d ",j,std[j].marks);
		}
		
		
	return 0;
}
