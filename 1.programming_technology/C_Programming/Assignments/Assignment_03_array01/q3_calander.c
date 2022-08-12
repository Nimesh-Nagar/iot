// Q3.Finding day of week based on reference date, say 1 st January 1970 which is Thursday. (Hint:- calculate no.of days elapsed from reference date to given date)

#include<stdio.h>

int main()
{
	int dt=1, mm=0, yr=1970;
	int new_dt, new_mm, new_yr, total_days, yr_rem, rem;
	
	printf("Enter new date : ");
	scanf("%d%d%d",&new_dt,&new_mm,&new_yr);
	printf("\nNew Date : %d / %d / %d",new_dt,new_mm,new_yr);
	yr_rem = new_yr-yr;
	total_days=(yr_rem*12*30)+(new_mm*30)+(new_dt);
	rem=total_days % 7;
		
	if(rem == 0)
		{
			printf("Day of week is Thursday \n");
		}
	else if(rem==1)
		{
			printf("Day of week is Friday \n");
		}
	else if(rem==2)
		{
			printf("Day of week is Saturday \n");
		}
	else if(rem==3)
		{
			printf("Day of week is Sunday \n");
		}
	else if(rem==4)
		{
			printf("Day of week is Monday \n");
		}
	else if(rem==5)
		{
			printf("Day of week is Tuesday \n");
		}
	else if(rem==6)
		{
			printf("Day of week is Wednesday \n");
		}	
		
	return 0;
	
}
