#include<stdio.h>

int main()
{
	typedef struct Employee
	{
		int empid;
		char name[20];
		char phone[12];
		char email[20];
		int salary; 
	}emp;

	emp e[10];
	emp *pt = &e;
	
	// Input taken from user
	for(int i=0; i<1; i++)
	{	
		
		printf("Enter Employee ID : ");
		scanf("%d",&(*pt).empid);
		
		printf("Enter Employee Name e%d : ",i);
		scanf("%s",(*pt).name);
		
		printf("Enter Employee phone number e%d : ",i);
		scanf("%s",(*pt).phone);
		printf("Enter Employee Email-ID e%d : ",i);
		scanf("%s",(*pt).email);
		printf("Enter Employee salary e%d : ",i);
		scanf("%d",&(*pt).salary);
		
	}
	
	//Printing Employees Detalis
	
	for(int i=0; i<1; i++)
	{
	printf("------------------------------------------------------------\n");
	printf("Employee Details are as follows: \n ");
	printf("\n{%d} Employee_ID : %d",i,pt->empid);
	printf("\n{%d} Name : %d",i,pt->name);
	printf("\n{%d} Phone no : ",i,pt->phone);
	}
/*	"%d | %s | %s | %s | %d ",pt->empid, pt->name, pt->phone, pt->email, pt->salary);
	
	} */

	return 0;
}
