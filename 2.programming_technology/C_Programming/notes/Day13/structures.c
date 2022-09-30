#include<stdio.h>


int main(){
	struct Student{
		int prn;
		char name[100];
		char phone[12];
		int no_of_assignment;
	}; // This is blueprint/skeleton/framework
	//This is not memory allocation
	
	//Now creating variable for Student structure:
	struct Student s1; // Allocating memory // On stACK
	struct Student s2; // Allocating memory // ON STACK
	struct Student s3; // Allocating memory // oN STACK

	//Use . operator to access members of s1 variable
	printf("Enter prn Number of s1 :");
	scanf("%d",&s1.prn);
	printf("Enter name of s1:");
	scanf("%s",s1.name);
	printf("Enter phone number of s1:");
	scanf("%s",s1.phone);
	printf("Enter number of assignments of s1:");
	scanf("%d",&s1.no_of_assignment);

	//Use . operator to access members of s2 variable
	printf("Enter prn Number of s2 :");
	scanf("%d",&s2.prn);
	printf("Enter name of s2:");
	scanf("%s",s2.name);
	printf("Enter phone number of s2:");
	scanf("%s",s2.phone);
	printf("Enter number of assignments of s2:");
	scanf("%d",&s2.no_of_assignment);


/*	//Use . operator to access members of s3
	printf("Enter prn Number of s3 :");
	scanf("%d",&s3.prn);
	printf("Enter name of s1:");
	scanf("%s",s3.name);
	printf("Enter phone number of s3:");
	scanf("%s",s3.phone);
	printf("Enter number of assignments of s3:");
	scanf("%d",&s3.no_of_assignment);
*/

	printf("S1 ->  : %d  | %s | %s | %d \n",s1.prn,s1.name,s1.phone,s1.no_of_assignment);
	printf("S2 ->  : %d  | %s | %s | %d \n",s2.prn,s2.name,s2.phone,s2.no_of_assignment);
	return 0;
}







