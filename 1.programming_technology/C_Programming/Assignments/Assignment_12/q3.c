//Q3. Try some nested calls sqrt(pow(2,abs(x))), putchar(toupper(ch)) etc

#include<stdio.h>
#include<math.h>
#include<stdlib.h>//contains abs() function

int main()
{
	int x ,res;
	
	printf("Enter value of x=");
	scanf("%d",&x);
	res = sqrt(pow(2,abs(x))); 
	
	printf("res=%d\n",res);  //for x=10 res = 32 
	
	char ch,out;
	printf("Enter character ch=");
	scanf("%c",&ch);	//when we press Enter it takes 'Enter' as a character input 
	scanf("%c",&ch);	// it will take proper input
	
	out = putchar(toupper(ch));
	printf("out=%c\n",out);
	
	return 0;
}
