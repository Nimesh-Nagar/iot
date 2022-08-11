#include<stdio.h>
#include"StudentData.h"

void input(struct Student *std,int* num_std){
	printf("Enter Student name :");
	scanf("%s",std[(*num_std)].name);
	printf("Enter PRN:");
	scanf("%d",&std[(*num_std)].prn);
	printf("Enter Day of date of birth: ");
	scanf("%d",&std[(*num_std)].dob.dd);
	printf("Enter month of date of birth: ");
	scanf("%d",&std[(*num_std)].dob.mm);
	printf("Enter Year of date of birth: ");
	scanf("%d",&std[(*num_std)].dob.yyyy);
	printf("Enter phone number: ");
	scanf("%s",std[(*num_std)].contact_details.phone);
	printf("Enter email: ");
	scanf("%s",std[(*num_std)].contact_details.email);
	++(*num_std);
}

void display(struct Student *std,int* num_std){
	for(int i = 0; i < (*num_std); i++){
		printf("%d | %s | %d/%d/%d | %s | %s\n",std[i].prn,std[i].name,std[i].dob.dd,std[i].dob.mm,std[i].dob.yyyy,std[i].contact_details.phone,std[i].contact_details.email);
	}
}

int menu_choice(){
	int ch =0;
	printf("[1] Add Student\n");
	printf("[2] Display Student\n");
	printf("[3] Exit\n");
	printf("Enter choice : ");
	scanf("%d",&ch);
	return ch;
}
int main(){
	struct Student std[100];
	int num_std=0;
	int ch=0;	
	//Menu
	do{
		ch = menu_choice();
		if(ch == 1){
			input(std, &num_std);
		}
		else if (ch == 2){display(std,&num_std);}
		else if (ch == 3){break;}
		else {printf("Wrong Choice");}		
	}while(1);
	
	return 0;
}
