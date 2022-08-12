#include <stdio.h>

void fibo(int n, int t1, int t2, int t3)
{
    
	printf("\n%d %d ",t1,t2); 
    
	for(int i=2 ; i < n; i++)
	{
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        printf("%d ",t3);
        }
	
}



int main()
{
	int n,i=0;
	int t1=0, t2=1, t3=0;
	printf("Enter n numbers ");
	scanf("%d",&n);
 
    fibo(n,t1,t2,t3);    
	
    return 0;
}
