#include<stdio.h>
#include"cdac_acts.h"

void input(struct Course* cr, int* num)
{
	printf("Enter Course ID : ");	
	scanf("%d",&cr[*(num)].course_id);
	
	printf("Enter course name : ")
	scanf("%s",cr[*(num)].course_name);
	
	printf("Enter number of students : ");
	scanf("%d",&cr[*(num)].no_student);
	for(int i = 0; i<2; i++);
	{
		printf("Enter module details %d : "i);
		printf("\tEnter module id :");
		scanf("%d",&cr[*(num)].modules[i].module_id); 
		printf("\tEnter module name :");
		scanf("%s",cr[*(num)].modules[i].module_name);
		printf("\tEnter module hrs :");
		scanf("%d",&cr[*(num)].modules[i].hrs);
	}
	(*num)++;	
}	

void display(struct Course* cr, int* num){
	printf("Course Details\n:");
	for(int i = 0 ;i<(*num); i++)
	{
		printf("00000");
	
	
	}

}


int main()
{
	struct Course crs[10];
	int no_crs= 0; // number of courses
	
	input (crs,&no_crs);


}
