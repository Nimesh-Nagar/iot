// Prime number    

#include<stdio.h>  

int main(){    
	int num,count=0;  
	printf("Enter the number to check prime: ");    
	scanf("%d",&num); 
	
	for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				count++;
			}
		
		}
		if(count==2)
			{
				printf("Prime Number");
					
			}
	   else
	   		{
	   			printf("Not a Prime");
	   		}
    
	
return 0;  
     
}    
