#include<stdio.h>
#include"Student_Opr.h"

//typedef struct Student stud;


int main(){

	struct Student std[100]; // Student type array
	int no_of_std = 0; // Total number students in the array
	
	printf("Enter number of students: ");
	scanf("%d",&no_of_std); //Taking number of students
	//input logic
	input(std, no_of_std);

	//Calculating Student wise total
	student_wise_total(std, no_of_std);	

	//Calculating Subject wise total
	subject_wise_total(std, no_of_std);

/*	//Calculating Subject wise total by array
	int total_sub_mark[5];
	for(int j=0; j < 5; j++){
		total_sub_mark[j] = 0;
		for(int i = 0 ; i<no_of_std; i++){
			total_sub_mark[j] = total_sub_mark[j] + std[i].marks[j];
		}
		printf("Subject %d -> %d\n",j, total_sub_mark[j]);
	}
*/
	return 0;
}







