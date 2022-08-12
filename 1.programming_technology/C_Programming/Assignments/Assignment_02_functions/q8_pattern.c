 #include<stdio.h>
void pat()
 {
 	for(int row = 1;row <= 5;row++)
 		{
 			for(int space = row ;space < 5; space++)
 			{
 				printf(" ");
 			}
 				for(int col = 1 ;col<=row; col++)
 				{
 					printf("%d",row);
 				}printf("\n");
 		}		
 }			 
 
int main()
 {
 	pat();
 	return 0;
 }
 
