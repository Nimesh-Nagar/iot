// Write a C program to find out sum & average of n numbers.


#include<stdio.h>
int main()
{
	int num,sum =0;
	float avg;
	
	printf("Enter the n Number : ");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		sum +=i;
		
	}
		avg = ((float)sum/num);	//type casting sum variable for profer output
		
		printf("\nsum of n numbers is %d",sum);
		printf("\naverage of n numbers is %.2f ",avg);
return 0;
}

