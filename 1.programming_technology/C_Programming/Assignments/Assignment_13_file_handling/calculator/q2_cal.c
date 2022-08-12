#include<stdio.h>

void menu()
{
	printf("[1]. Add\n");
	printf("[2]. Sub\n");
	printf("[3]. Mul\n");
	printf("[4]. div\n");
	printf("[5]. Exit\n");
}

int add(FILE* fp)
{
	int a,b;
	fscanf(fp,"%d%d",&a,&b);
	return a + b;

}
int sub(FILE* fp)
{
	int a,b;
	fscanf(fp,"%d%d",&a,&b);
	return a - b;

}
int mul(FILE* fp)
{
	int a,b;
	fscanf(fp,"%d%d",&a,&b);
	return a * b;

}
int div(FILE* fp)
{
	int a,b;
	fscanf(fp,"%d%d",&a,&b);
	return a / b;

}





int main()
{
	FILE *fp = fopen("cal.txt","r+");
	int ch = 0;
	int res = 0;
	while(1){
		menu();
		printf("Enter your choice : ");
	//	scanf("%d",&ch);
		fscanf(stdin,"%d",&ch);
		rewind(fp); // rewind the cursor in file to starting point
		if(ch==1){
			res = add(fp);
			//printf("Sum is : %d\n",res);
			frpintf
		}
		else if(ch==2){
			res = sub(fp);
			printf("Subtraction is : %d\n",res);
		}
		else if(ch==3){
			res = mul(fp);
			printf("multiplication is : %d\n",res);
		}
		else if(ch==4){
			res = div(fp);
			printf("Dvision is : %d\n",res);
		}				
		else if(ch==5){break;}
		else{printf(" Wrong option \n");}
	}		
	
	return 0;
	
}
