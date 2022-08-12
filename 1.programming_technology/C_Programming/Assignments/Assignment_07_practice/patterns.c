
#include<stdio.h>

// Half pyramid pattern 01
void pat1(int num)
{
	for(int i=1; i<=num; i++)
	{
	    for(int j=1;j<=i; j++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}
}

// Inverted Half pyramid pattern 02
void pat2(int num)
{
	for(int i=1; i<=num; i++)
	{
	    for(int j=i;j<=num; j++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}
}

// Hollow Inverted Half pyramid pattern 03
void pat3(int num)
{
	for(int i=1; i<=num; i++)
	{
	    for(int j=i;j<=num; j++)
	    {
	        if(i==1||j==1)
	        {
	        	printf("*");
	        }else
	        {
	        printf(" ");
	        }
	    }
	    printf("\n");
	}
}


//solid half diamond
void half_diamond(int num)
{
	for(int i=1; i<=num; i++)
	{
	    for(int j=1;j<=i; j++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}
	for(int i=2; i<=num; i++)
	{
	    for(int j=i;j<=num; j++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}
}


// right angled triangle
void piramid(int num)
{
	for(int i=1; i<=num; i++)
	{
	      for(int j=1;j<=num-i; j++)
	    {
	        printf(" ");
	    }
	    for(int k=1; k<=i; k++)
        {
            printf("*");
        }
	    printf("\n");
	}
}



int main()
{
    int num;
    printf("Enter number line: ");
    scanf("%d",&num);
	pat1(num);
	printf("------------------------------------------------------------------------------ \n");
	
	pat2(num);
	printf("------------------------------------------------------------------------------ \n");
	
	pat3(num);
	printf("------------------------------------------------------------------------------ \n");
	
	half_diamond(num);
	printf("------------------------------------------------------------------------------ \n");
	
	piramid(num);
	printf("------------------------------------------------------------------------------ \n");
	

	return 0;
}
