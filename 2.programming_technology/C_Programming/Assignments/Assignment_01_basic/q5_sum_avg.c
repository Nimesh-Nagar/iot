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
		
	avg = ((float)sum/num);	//type casting sum variable for proper output
		
	printf("\n Sum of n numbers is %d ",sum);
	printf("\n Average of n numbers is %.2f ",avg);
	
	// int add = (num * (num + 1) + 1)/2 ;
	// float a = ((float)add/num);

	// printf("\n Addition : %d ",add);
	// printf("\n Average : %.2f \n",a);


return 0;
}

