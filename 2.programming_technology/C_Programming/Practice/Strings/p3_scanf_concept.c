#include <stdio.h>

int main()
{
    char name[40];
    printf("Enter name : ");
    scanf("%s",name);

    printf("%s %s\n",name,"Srivastava");
    return 0;

}

/*printf() takes base address of string and continuous to print untill it encounters '\0' .
when we enter a string using %s the null char is automatically stored at the end of array.
OUTPUT    
    Enter name : Deepak
    Deepak Srivastava

    Enter name : Deepak
    Deepak Srivastava

--> In second run we entered the string with space we could not get the required result. This is because sccanf() stops reading as soon as it 
encounter whitespace.

--> For entering string with whitespace we can use the function gets(). It Stops reading only when it encounters new line and replace this 
newline with null character '\0'. we have another function puts() which can output a string and replaces the null character by a newline. 

*/
