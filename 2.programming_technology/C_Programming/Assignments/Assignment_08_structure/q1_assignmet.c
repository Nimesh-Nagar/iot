#include<stdio.h>

int main()
{
	struct employee{
		int empid;
		char name[20];
		char phone[12];
		char email[20];
		int salary; 
	};

	typedef struct employee emp;
	emp e1[10];
	
	// Input taken from user
	for(int i=0; i<2; i++)
	{
		printf("Enter Employee ID e%d : ",i);
		scanf("%d",&e1[i].empid);
		printf("Enter Employee Name e%d : ",i);
		scanf("%s",e1[i].name);
		printf("Enter Employee phone number e%d : ",i);
		scanf("%s",e1[i].phone);
		printf("Enter Employee Email-ID e%d : ",i);
		scanf("%s",e1[i].email);
		printf("Enter Employee salary e%d : ",i);
		scanf("%d",&e1[i].salary);
		
	}
	
	//Printing Employees Detalis
	
	for(int i=0; i<2; i++)
	{
		printf("Employee %d --> %d | %s | %s | %s | %d \n",i, e1[i].empid,e1[i].name,e1[i].phone,e1[i].email,e1[i].salary);
	
	}

	return 0;
}
