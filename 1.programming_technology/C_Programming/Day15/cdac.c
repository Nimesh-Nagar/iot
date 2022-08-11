#include<stdio.h>
#include"ACTS.h"

/*void input(struct Course* cr,int* num){
	printf("Enter course id :");
	scanf("%d",&cr[*(num)].course_id);
	printf("Enter course name: ");
	scanf("%s",cr[*(num)].course_name);
	printf("Enter number of students: ");
	scanf("%d",&cr[*(num)].no_student);
	for(int i = 0 ;i < 2; i++){
		printf("Enter modules details %d: ",i);
		printf("\tEnter module id:");
		scanf("%d",&cr[*(num)].modules[i].module_id);
		printf("\tEnter module name:");
		scanf("%s",cr[*(num)].modules[i].module_name);
		printf("\tEnter module hrs:");
		scanf("%d",&cr[*(num)].modules[i].hrs);
	}
	(*num)++;
}
*/

void input(struct Course* c){
	printf("Enter course id :");
	scanf("%d",&c->course_id);
	printf("Enter course name: ");
	scanf("%s",c->course_name);
	printf("Enter number of students: ");
	scanf("%d",&c->no_student);
	for(int i = 0 ;i < 2; i++){
		printf("Enter modules details %d: ",i);
		printf("\tEnter module id:");
		scanf("%d",&c->modules[i].module_id);
		printf("\tEnter module name:");
		scanf("%s",c->modules[i].module_name);
		printf("\tEnter module hrs:");
		scanf("%d",&c->modules[i].hrs);
	}


}

void display_crs(struct Course *c){
	printf("Course  : %d | %s | %d \n",c->course_id,c->course_name,c->no_student);
	for(int j = 0 ; j < 2 ; j++){
printf("\t Module %d | %s | %d\n",c->modules[j].module_id,c->modules[j].module_name,c->modules[j].hrs);
	}
}


void display(struct Course* cr,void* num){
	printf("Course Details\n:");
	for(int i = 0 ; i < (*(int *)num) ; i++){
			display_crs(&cr[i]);
	}
}

void menu(){
	printf("[1] Add Course\n");
	printf("[2] Display Course\n");
	printf("[3] Exit\n");
}


int main(){
	struct Course crs[10];
	int no_crs=0; // Number of courses
	int ch = 0;
//	input(crs,&no_crs);
//	input(crs,&no_crs);
//	input(&crs[no_crs]);
//	no_crs++;
//	display(crs,&no_crs);
	do{
		menu();
		scanf("%d",&ch);
		if( ch == 1){ input(&crs[no_crs]); no_crs++;}
		else if( ch == 2){display(crs,&no_crs);}
		else if( ch == 3){break;}
		else{ printf("Wrong Choice\n");}

	}while(1);	
	return 0;
}
