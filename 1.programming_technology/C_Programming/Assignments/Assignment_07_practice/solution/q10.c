#include<stdio.h>
void pattern1()
{

	for(int i=0;i<6;i++)
	{
		for(int j=0;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
}		
/*
OUTPUT
						*
						**
						***
						****
						*****
						******

*/

void pattern2()
{

	for(int i=0;i<6;i++)
	{
		for(int j=5;j>=i;j--)
		{
		printf("*");
		}
		printf("\n");
	}
}
/*
OUTPUT
						******
						*****
						****
						***
						**
						*
								

*/

void pattern3()
{

	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=i;j++)
		{
		if((j==1)||(i==6)||(j==i))
		{
		printf("*");
		}
		else
		{
		printf(" ");
		}
		}
		printf("\n");
	}
}
/*
OUTPUT
						*
						**
						* *
						*  *
						*   *
						******
						

*/
void pattern3rev()
{

	for(int i=1;i<=6;i++)
	{
		for(int j=6;j>=i;j--)
		{
		if((i==1)||(j==6)||(j==i))
		{
		printf("*");
		}
		else
		{
		printf(" ");
		}
		}
		printf("\n");
	}
}
/*
OUTPUT
						******
						*   *
						*  *
						* *
						**
						*
					

*/

void pattern4()
{

	for(int i=1;i<=6;i++)
	{
		for(int j=5;j>=i;j--)
		{
		printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
		printf("* ");
		}
		printf("\n");
	}
}
/*
OUTPUT
pattern 4
					     * 
					    * * 
					   * * * 
					  * * * * 
					 * * * * * 
					* * * * * * 
						

*/

void pattern5()
{

	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<i;j++)
		{
		printf(" ");
		}
		
		for(int k=6;k>=i;k--)
		{
		printf("* ");
		}
		printf("\n");
	}
}
/*
OUTPUT
					* * * * * * 
					 * * * * * 
					  * * * * 
					   * * * 
					    * * 
					     * 
						

*/

void pattern6()
{
	for(int i=1;i<=6;i++)
	{
		for(int j=5;j>=i;j--)
		{
		printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
		if((k==1)||(i==6)||(k==i))
		{
		printf("* ");
		}
		else
		{
		printf("  ");
		}
		}
		printf("\n");
	}
	
}
/*
OUTPUT

						     * 
						    * * 
						   *   * 
						  *     * 
						 *       * 
						* * * * * * 
											

*/

void pattern7()
{
	
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
		printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
		printf("* ");
		}
		
		printf("\n");
	}
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<i;j++)
		{
		printf(" ");
		}
		
		for(int k=6;k>=i;k--)
		{
		printf("* ");
		}
		printf("\n");
	}
	
}
/*
OUTPUT
    						     * 
						    * * 
						   * * * 
						  * * * * 
						 * * * * * 
						* * * * * * 
						 * * * * * 
						  * * * * 
						   * * * 
						    * * 
						     * 


*/

void pattern8()
{
	
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
		printf(" ");
		}
		for(int k=1;k<=(i);k++)
		{
		if((k==1)||(k==i))
		{
		printf("* ");
		}
		else
		{
		printf("  ");
		}
		}
		printf("\n");
	}
	for(int i=5;i>=1;i--)
	{
		for(int j=5;j>=i;j--)
		{
		printf(" ");
		}
		for(int k=1;k<=(i);k++)
		{
		if((k==1)||(k==i))
		{
		printf("* ");
		}
		else
		{
		printf("  ");
		}
		}
		printf("\n");
	}
	
}
/*
OUTPUT

						     *
						    * *
						   *   *
						  *     *
						 *       *
						 *       *
						  *     *
						   *   *
						    * *
						     *


*/

void pattern9()
{
	
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<6;i++)
	{
		for(int j=5;j>=i;j--)
		{
		printf("*");
		}
		printf("\n");
	}

}
/*
OUTPUT

						*
						**
						***
						****
						*****
						******
						******
						*****
						****
						***
						**
						*

*/


int main()
{
	printf("pattern 1\n");
	pattern1();
	printf("pattern 2\n");
	pattern2();
	printf("pattern 3\n");
	pattern3();
	printf("pattern 3 reverse\n");
	pattern3rev();
	printf("pattern 4\n");
	pattern4();
	printf("pattern 5\n");
	pattern5();
	printf("pattern 6\n");
	pattern6();
	printf("pattern 7\n");
	pattern7();
	printf("pattern 8\n");
	pattern8();
	printf("pattern 9\n");
	pattern9();
	return 0;
}
