#include<stdio.h>
int main()
{
    int a;
    printf("Enter Year: ");
    scanf("%d",&a);

	if(a%4 == 0)
		{
		printf("%d is a Leap Year",a);	
		}
	else if(a%100 == 0)
		{
		printf("%d is not a Leap year",a);
		} 

	else if(a%400 == 0)
		{
		printf("%d is a Leap Year",a);
		}
	else
		{
		printf("%d is not a Leap year",a);
		}



/* 	if((a%4 == 0) && (a%400 == 0)||(a%100 !=0))
    {
        printf("%d is a Leap Year",a);
    }
    else
        {
            printf("%d is not a Leap year",a);
        }
*/

return 0;
}



