//2.Write a menu driven program to read data from  file and perform airthmatic calculation.

#include<stdio.h>

void menu()
{
	printf("[1]. Addition \n");
	printf("[2]. Sutraction \n");
	printf("[3]. Multiplication \n");
	printf("[4]. Division \n");
	printf("[5]. Exit \n");
}

int main()
{
	FILE *fp = fopen("calculator.txt","r+");
	int a,b;
	
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	
	menu();
	do{
		int ch=0;
		printf("Choose any one option : ");
		scanf("%d",&ch);
		
		if(ch==1){
			fprintf(fp,"Add. =%d",a+b);
		}
		else if(ch==2){
			fprintf(fp,"Sub. =%d",a-b);
		}
		else if(ch==3){
			fprintf(fp,"Mul. =%d",a*b);
		}
		else if(ch==4){
			fprintf(fp,"Div. =%d",a/b);
		}
		else if(ch==5){
			break;
		}
		else{
			printf("Choose appropriate options");
		}
	
	}while(1);
		
	
	return 0;
	
}	
	
	
	
