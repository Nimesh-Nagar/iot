/* Function with variable number of arguments 
WE need function that can accept variable number of arguments of different data types. thae types of function are called "variadic function"

Header File : stdarg.h provides this facility 

Type    : va_list   ---->   Used to declear Argument Pointer variable 

Macros  : va_start  ---->   Initialized the Argument Pointer variable
          va_arg    ---->   Retrieves the current argument and increments the Argument Pointer 
          va_end    ---->   Assigns NULL to Argument Pointer 

// ellipse (...) should occur at the end of arg. list and there should alteast one fixed arg.
    void func(char *str, int num, ...){
    
    }
*/

// Program to find sum of integers 
#include<stdio.h>
#include<stdarg.h>

int sum(int num, ...)
{
    va_list ap;
    int arg, total = 0;

    va_start(ap, num);

    for(int i=0; i<num; i++){
        arg = va_arg(ap, int);
        printf("%d  ",arg);
        total += arg;
    }
    va_end(ap);
    return total; 
}

int main()
{
    printf("Total = %d \n ",sum(2,99,68));
    printf("Total = %d \n ",sum(3,11,79,32));
    printf("Total = %d \n ",sum(5,23,34,45,55,78));
    
    return 0;
}



