#include<stdio.h>

int main(){
	struct Student{
		int prn;
		char name[100];
		char phone[12];
		int no_of_assignment;
	};
	
	struct Student std[100];
	
	for(int i =0 ; i < 2; i++){
		printf("Enter prn Number of std %d:",i);
		scanf("%d",&std[i].prn);
		printf("Enter name of %d:",i);
		scanf("%s",std[i].name);
		printf("Enter phone number of %d:",i);
		scanf("%s",std[i].phone);
		printf("Enter number of assignments of %d:",i);
		scanf("%d",&std[i].no_of_assignment);
	}

	for(int i =0 ; i < 2; i++){
printf("STD %d ->:%d|%s|%s|%d\n",i,std[i].prn,std[i].name,std[i].phone,std[i].no_of_assignment);
	}
	return 0;
}
