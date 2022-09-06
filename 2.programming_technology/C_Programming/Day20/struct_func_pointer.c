#include<stdio.h>

typedef struct Employee{
	int empID;
	char name[100];
	int salary;
	int (*tax)(int);
}Employee;

int get_tax(int sal){
	return 0.10*sal;
}

Employee* create_object(){
	Employee* temp = malloc(sizeof(Employee));
	temp->tax= &get_tax;
	return temp;
}

int main(){
	Employee e1 = {1,"Sid",1000,&get_tax};
	Employee e2;
	e2.tax = &get_tax;

	Employee *emp = create_object();


	return 0;
}
