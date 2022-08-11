int main(){
	struct Student {
		int prn;
		char name[100];
		int marks[5];
	};
	struct Student s1; //Creating variable  of Student Type
	struct Student s2; // Creating variable of Student type
	struct Student* pt = &s1;
	//	(*pt). => s1. => pt->


	printf("Enter s1 data");
//	scanf("%d",&pt->prn);
//	scanf("%d",&s1.prn)
//	scanf("%d",&(*(pt).prn))


	struct Student std[100];
	struct Student *x = std;
	//x[0]
	//std[0]
	int no_of_std=0;
/*	int ch;
	int i =0;
	do{
		printf("Enter prn Number :");
		scanf("%d",&std[i].prn);
		printf("Enter name : ");
		scanf("%s",std[i].name);
		no_of_std++;
		i++;	
		printf("1.Add more student");
		printf("2.Exit")		
		scanf("%d",&ch);
	}while(ch == 1);
*/
	
	printf("Enter number of student:")
	scanf("%d" &no_of_std);
	for(int i = 0 ; i < no_of_std; i++){
		printf("Enter prn Number :");
		scanf("%d",&std[i].prn);
		printf("Enter name : ");
		scanf("%s",x[i].name);
		for(int j = 0; j < 5 ; j++){
			printf("Enter marks for %d subject",j);
			scanf("%d",&std[i].marks[j]);//std[0].marks[0],std[0].marks[1],
		}
	}
	
}

















