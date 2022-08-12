/* Q2.Create Menu driven Library Management
1.Add new book
2.Display book
Book Data Members : bookId, BookName, ISBN no.,Author */

#include<stdio.h>
#include"q2_library.h"

/*struct Library{
		int book_id;
		char book_name[50];
		int isbn_no;
		char author[50];
	};
*/

void display(struct Library* l, int* book)
{
	for(int i = 0 ; i<(*book); i++)
	{
		printf("Book ID | %d \n",l[i].book_id);
		printf("Book Name | %s \n",l[i].book_name);
		printf("ISBN Number | %d \n",l[i].isbn_no);
		printf("Author Name | %s \n",l[i].author);
		printf("______________________________________________________________________\n");
							
	}	


}


void input(struct Library *l, int *nos)
{
		printf("\nEnter Book ID : ");
		scanf("%d",&l->book_id);
		printf("\nEnter Book Name : ");
		scanf("%s",l[(*nos)].book_name);
		printf("\nEnter Book ISBN Number : ");
		scanf("%d",&l[(*nos)].isbn_no);
		printf("\nEnter name of Author : ");
		scanf("%s",l[(*nos)].author);	
		(*nos)++;	
}

int menu()
{
	

	int ch = 0;
	printf("[1] Add New Book \n");
	printf("[2] Display Book \n");
	printf("[3] Exit \n");
	printf("Enter your Choice : ");
	scanf("%d",&ch);
	return ch;
}

int main()
{

	
	struct Library l[100];
	int books = 0;
	int ch = 0;
	
	do{
		ch = menu();
		if(ch == 1){ 
			input(l,&books);
		}
		else if(ch == 2){ 
			display(l,&books);
		}
		else if(ch == 3){ 
			break;
		}
		else{
			printf("Choose appropriate options \n");
		}
		printf("\n");
	}while(1); 

	return 0;
}
