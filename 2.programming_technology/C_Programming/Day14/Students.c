#include"Student.h"

void input(struct Student* std, int no_of_std){
	for(int i = 0 ; i < no_of_std ; i++){
		printf("Enter prn number of std %d : ",i);
		scanf("%d",&std[i].prn);// input prn
		printf("Enter name of std %d : ",i);
		scanf("%s",std[i].name); // input name
		
		//input  marks
		for(int j = 0; j < 5 ; j++){
			printf("Enter std %d marks of subject %d: ",i, j);
			scanf("%d",&std[i].marks[j]);
		}
	}
}

void student_wise_total(struct Student *std, int no_of_std ){
	int total = 0;
	for(int i=0; i < no_of_std; i++){
		total = 0;
		for(int j = 0 ; j<5; j++){
			total = total + std[i].marks[j];
		}
		printf("%d -> %d | %s | %d \n",i,std[i].prn,std[i].name, total);
	}
}

void subject_wise_total(struct Student *std , int no_of_std){
	int total;
	for(int j=0; j < 5; j++){
		total = 0;
		for(int i = 0 ; i<no_of_std; i++){
			total = total + std[i].marks[j];
		}
		printf("Subject %d -> %d\n",j, total);
	}
}


