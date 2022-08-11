//Add function definition
	
	extern int num;//extern is to be declared in file which we want to read and not where we have created the file

int add(int num)
{	
	int sum = 0;
	for(int i = 0; i < num; i++)
	{
		
		sum = sum + i;
		
	}return sum;//sum returned to main.c file
}
