/* Q4. Create an employee structure with the following members empid, employee name, salary, year of joining etc.
Accept the data for certain no. of employees.
Find their total, average, max, min salary.
Also Find out the employees with maximum, minimum service,use a function to find service for each employee element in the array. */

#include<stdio.h>

int main()
{
	struct employee{
		
		int empid;
		char name[20];
		int salary;
		int yr_of_joining;
	};
	
	typedef struct employee e;
	e emp[100];
	
// User input 
	int num=0;
	printf("Total numbers of employees: ");
	scanf("%d",&num);
	
	for(int i=0 ; i<num; i++)
	{
		printf("Enter Employee ID : ");
		scanf("%d",&emp[i].empid);

		printf("Enter Employee Name : ");
		scanf("%s",emp[i].name);
		
		printf("Enter Employee salary : ");
		scanf("%d",&emp[i].salary);
		
		printf("Enter yr_of_joining: ");
		scanf("%d",&emp[i].yr_of_joining);	
	}
	
	
//Total and Average salary 
	int total = 0;
	float avg = 0.0;	
	for(int i=0 ; i<num; i++)
	{
		total += emp[i].salary;
	}	
	printf("Total salary of employees = %d \n",total);
	
	avg = total/(float)num;
	printf("Average salary of employees = %.2f \n",avg);

// calculation for Minimum salary	
	int min , max;
	min = max = emp[0].salary;
	for(int i=1 ; i<num; i++)
	{
		if(emp[i].salary < emp[0].salary)
		{
			min = emp[i].salary;
		}
	}
	printf("Min salary is = %d \n",min);
	
// Calculation of Maximum salary	
	for(int i=1 ; i<num; i++)
	{
		if(emp[i].salary > emp[0].salary)
		{
			max = emp[i].salary;
		}
	}
	printf("Max salary is = %d\n",max);

// calculation of service year 	
	int a = 2022,exp[num];
	for(int i=0 ; i<num; i++)
	{
		
		exp[i] = a - emp[i].yr_of_joining;
	
	}
	for(int i=0 ; i<num; i++)
	{
		
		printf("Experience = %d \n",exp[i]);
	}
			  
// Employee Details :	

	for(int i=0 ; i<num; i++)
	{
		printf("Employee Details : ID:- %d |Name:- %s |Salary:- %d |Joining:- %d |Exp.:- %d  \n",emp[i].empid,emp[i].name,emp[i].salary,emp[i].yr_of_joining,emp[i]);
		
	}
		
	return 0;
}

