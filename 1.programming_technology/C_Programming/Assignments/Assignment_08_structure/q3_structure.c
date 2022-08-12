// Q3. In the student structure created above modify marks member as an array(array of 5 subjects), create an array of struct variables and do some input,output operations.(Marks of ith student in jth subject etc).Find the student wise totals, subject wise totals.

#include<stdio.h>

int main()
{
	struct student{
		int prn;
		char name[20];
		char subject[20];
		int marks[5];
		
	};

	struct student std[50];

	// Input taken from user
	
	int no_of_std = 0;
	printf("Total numbers of students :- ");
	scanf("%d",&no_of_std);
		
	for(int i=0;i<no_of_std;i++)
	{
		printf("Enter PRN no. : " );
		scanf("%d",&std[i].prn);
		
		printf("Enter Student's Name : " );
		scanf("%s",std[i].name);
			
		// inpute marks:
		for(int j=0;j<5;j++)
		{
			printf("Enter student %d Subject S%d Marks : ",i,j);
			scanf("%d",&std[i].marks[j]);	
		}				
	}
	printf("\n");	

	// calculation for student wise total
	int sum = 0;
	for(int i=0;i<no_of_std;i++)
	{
		sum = 0;
		for(int j=0;j<5;j++)
		{
			sum = sum + std[i].marks[j];
			
		}
		printf("Student details : %d | %s \n",std[i].prn,std[i].name);
		printf("Total marks : %d |\n",sum);	
	}			
	printf("\n");	
	
	//calculation for subject wise total
	
	
	for(int i=0;i<5;i++)
	{
		sum = 0;
		for(int j=0;j<no_of_std;j++)
		{
			sum = sum + std[j].marks[i];
			
		}
		printf("Total marks in subject %d : %d |\n",i,sum);	
	}			
	printf("\n");
	
		
	
	return 0;
}
