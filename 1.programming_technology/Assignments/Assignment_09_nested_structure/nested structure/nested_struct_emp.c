#include<stdio.h>
#include"employ_struct.h"

int choose_menu(){
	int ch = 0;
	printf("[1] Add Employee \n");
	printf("[2] Display Employee \n");
	printf("[3] Search Employee \n");
	printf("[4] Change name of Employee \n");
	printf("[5] Exit \n");
	printf("Enter your Choice");
	scanf("%d",&ch);
	return ch;
}

void input(struct Employee *emp, int* num_emp){
	printf("Enter Employee Name : ");
	scanf("%s",emp[(*num_emp)].name);
	printf("Enter Employee ID : ");
	scanf("%d",&emp[(*num_emp)].empid);
	printf("Enter date of Date of Birth : ");
	scanf("%d",&emp[(*num_emp)].dob.dd);
	printf("Enter month of Date of Birth : ");
	scanf("%d",&emp[(*num_emp)].dob.mm);
	printf("Enter Year of Date of Birth : ");
	scanf("%d",&emp[(*num_emp)].dob.yyyy);
	printf("Enter flat number for address : ");
	scanf("%d",&emp[(*num_emp)].add.flat_no);
	printf("Enter employee's address : ");
	scanf("%s",emp[(*num_emp)].add.address);
	printf("Enter state for address : ");
	scanf("%s",emp[(*num_emp)].add.state);
	++(*num_emp);
}

void display(struct Employee *emp, int* num_emp){
	for(int i=0; i<(*num_emp); i++)
	{
		//printf("Employee Name | Employee id | Date of Birth | Address| \n");
		printf(" %s\t| %d\t| %d/%d/%d\t| %d, %s, %s\t | \n", emp[i].name,emp[i].empid,emp[i].dob.dd, emp[i].dob.mm,emp[i].dob.yyyy,emp[i].add.flat_no,emp[i].add.address,emp[i].add.state);
	}
}


void search(struct Employee *emp, int* num_emp){
	int find;
	printf("Enter the Employee ID for search : ");
	scanf("%d",&find);
	for(int i=0; i<(*num_emp); i++)
	{
		if(emp[i].empid==find)
		{
			printf("Employee Name = %s \n",emp[i].name);
		}
	}
}

void change_name(struct Employee *emp, int* num_emp){
	int find;
	printf("Enter the Employee ID to change name : ");
	scanf("%d",&find);
	for(int i=0; i<(*num_emp); i++)
	{
		if(emp[i].empid==find)
		{
			printf("Enter Name to change = ");
			scanf("%s",emp[i].name);
		}
	}
}


int main()
{
	struct Employee emp[100];
	int num_emp=0;
	int ch = 0;
	// Menu
	
	do{
		ch = choose_menu();
		if(ch==1){
			input(emp, &num_emp);
		}	
		else if(ch==2){
			display(emp, &num_emp);
		}
		else if(ch==3){
			search(emp, &num_emp);
		}
		else if(ch==4){
			change_name(emp, &num_emp);
		}
		else if(ch==5){
			break;
		}		
		else{
			printf("Choose appropriate options \n");
		}
		printf("\n");	
	}while(1);	
		
	

	return 0;
	
}

