
#include<stdio.h>
int main()
{
    char name[6];
    printf("Enter Name : ");
    // gets(name);
    fgets(name,sizeof(name),stdin);
    printf("user entered name => ");
    puts(name);

    return 0;
}

/*  fgets()
    Enter Name : Nagar
    user entered name => Nagar

    Enter Name : nimesh nagar
    user entered name => nimes
*/
/* using gets()

    Enter Name : nimesh nagar
    user entered name => nimes

    Enter Name : nimesh nagar
    user entered name => nimesh nagar
    *** stack smashing detected ***: terminated
    Aborted (core dumped)


*/



