#include<stdio.h>
#define add(x,y) (x+y)
#define sub(x,y) (x-y)
#define mul(x,y) (x*y)
#define div(x,y) (x/y)


void menu()
{
	printf(" [1]. Addition\n ");
	printf("[2]. Subtraction\n ");
	printf("[3]. Multiplication\n ");
	printf("[4]. Division\n ");
	printf("[5]. Exit\n ");
}





int main()
{
	int a,b;
	printf("Enter two number below for calculation \n");
	printf("Enter 1st Number : ");
	scanf("%d",&a);
	printf("Enter 2nd Number : ");		
	scanf("%d",&b);
	
	//Menu
	do{
		menu();
		int ch;
		printf("Choose any option : ");
		scanf("%d",&ch);
		
	/*	if(ch==1){printf("\nAddition of two numbers is %d \n",add(a,b));}
		else{printf("Choose proper option \n ");}	
	*/
	switch(ch)
		{
		case 1 : printf("\nAddition of two numbers is %d \n",add(a,b));
			     break;
		case 2 : printf("Subtraction of two numbers is %d \n",sub(a,b));
			     break;
		case 3 : printf("Multiplication of two numbers is %d \n",mul(a,b));
			     break;
		case 4 : printf("Division of two numbers is %d \n",div(a,b));
			     break;
		case 5 : break;			     	             	         
		default : printf("choose proper options");
			     break;	
		}
	}while(1);
	


    return 0;    
    
}

