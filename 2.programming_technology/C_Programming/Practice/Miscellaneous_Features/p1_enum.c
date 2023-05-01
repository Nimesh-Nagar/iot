/* 
Sometimes the replacement of integer constants by some meaningful and descriptive names, enhances the readability of code and makes it
self documenting.     
    Enumeration : An enumeration type is a user defined data type, which can take values only from a user defined list of named integer
    constants called enumerators.

*/

#include<stdio.h>

int main()
{
    enum month{Jan,Feb,Mar,Apr,May,Jun}m1,m2;
    /*
        enum = keyword
        month = identifier that specifies name of new enumerator types being defined
        Jan,Feb... = ther are identifiers which represents interger constants and called as eunumerator cont. or enumerators 
        m1,m2 = Variables of type enum month
    */

    m1 = Mar;

    printf("Value of \"Mar\" = %d \n",Mar);
    printf("Value of m1 = %d \n",m1);

// it is not possible to perform Inpute or output in terms of enumerator names. 
    printf("Enter value of m2 : ");
    scanf("%d",&m2);
    printf("m2 = %d \n",m2);


    return 0;
}
