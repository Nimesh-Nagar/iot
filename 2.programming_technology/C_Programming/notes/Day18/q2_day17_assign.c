#include<stdio.h>
#include<stdlib.h>
void menu(){
	printf("[1] Add\n");
	printf("[2] Sub\n");
	printf("[3] Exit\n");
}

int add(FILE* fp){
	int a,b;
	fscanf(fp,"%d%d",&a,&b);
	return a + b;
}

int sub(FILE* fp){
	int a,b;
	fscanf(fp,"%d%d",&a,&b);
	return a - b;
}

int main(){
	FILE *fp = fopen("calc.txt","r+");
	int ch = 0;
	int res = 0;
	while(1){
		menu();
		printf("Enter choice : \n");
//		scanf("%d",&ch);
		fscanf(stdin,"%d",&ch);
		rewind(fp);
		/*if(ch == 1){
			res = add(fp);
			fprintf(fp,"Sum is : %d\n",res);
		}
		else if(ch == 2){
			res = sub(fp);
			fprintf(stdout,"Substraction is : %d\n",res);
		}
		else if(ch == 3){break;}
		else { printf("Wrong Choice\n");}*/
		if(ch == 3){break;}
		switch(ch){
			case 1: res = add(fp);
				fprintf(fp,"Sum is : %d\n",res);
				break;
			case 2: res = sub(fp);
				fprintf(stdout,"Substraction is : %d\n",res);
				break;
		//	case 3: exit(0);
			default : printf("Wrong Choice\n");
		}
	}	
	return 0;
}










