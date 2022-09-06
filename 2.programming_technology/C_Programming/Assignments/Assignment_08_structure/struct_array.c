/* Create an employee structure with the following members empid, employee name, salary, year of joining etc.
Accept the data for certain no. of employees and find their total, average, max, min salary. Also find out the employees with maximum, minimum service,use a
function to find service for each employee element in the array. */


#include<stdio.h>

int main()
{
	struct employee{
		int empid;
		char name[20];
		int salary; 
		int year_of_joining;
	};

	typedef struct employee emp;
	emp e1[10];
	
	// Input taken from user
		
	for(int i=0;i<2;i++)
	{
		printf("Enter Employee's ID S%d : ",i);
		scanf("%d",&std[i].empid);
		printf("Enter Employee's Name S%d : ",i);
		scanf("%d",std[i].name);
		printf("Enter Employee's salary S%d : ",i);
		scanf("%d",&std[i].name);
