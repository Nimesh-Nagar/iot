//Q5.ifinding a substring in a main string

#include<stdio.h>

int sub_string(char *master, char *sub)
{
	int i = 0 ,j = 0;
	while(master[i] != '\0')
	{
		if(master[i] == sub[j])
		{
			while(master[i] != '\0' && sub[j] != '\0')
			{
				if(master[i] != sub[j])
				{
					break;
				}
				j++;
				i++;
			}
		}
		if(sub[j] == '\0')
		{
			return 1;//true value
		}
		i++;
	}			
	return 0;//false value

}



int main()
{
	char master [100], sub [100];
	printf("Enter Master String:");
	scanf("%s",master);
	
	printf("Enter Substring:");
	scanf("%s",sub);
	
	int status = sub_string(master, sub);
	printf("Status is=%d\n",status);
	
	if(status == 1)
	{
		printf("Substring is found\n");
	}
		else
		{
			printf("Substring is not found\n");
		}
	return 0;
}
