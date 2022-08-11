// Q3. In the student structure created above modify marks member as an array(array of 5 subjects), create an array of struct variables and do some input,output operations.(Marks of ith student in jth subject etc).Find the student wise totals, subject wise totals.

#include<stdio.h>

int main()
{
	struct student{
		
		char name[20];
		char subject[20];
		int marks[5];
		
	};

	struct student std[50];
	
	
	// Input taken from user
	
	int no_of_std = 0;
	printf("Enter number of student : ");
	scanf("%d",&no_of_std);
		
	for(int i=0;i<no_of_std;i++)
	{
		printf("Enter Student's Name : " );
		scanf("%s",std[i].name);
		
		for(int j=1;j<6;j++)
		{
			printf("Subject S0%d Marks : ",j);
			scanf("%d",&std[j].marks[j]);
	
		}		
		
	}
	
	
	
	
	
	
	
	
