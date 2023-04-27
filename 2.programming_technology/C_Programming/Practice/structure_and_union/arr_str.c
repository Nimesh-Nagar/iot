// Array of Structures

#include <stdio.h>

struct student {
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct student std[5];

//Taking user input
    for(int i=0; i<5; i++){
        printf("Enter Name, Age and Markes : ");
        scanf("%s%d%f",std[i].name,&std[i].age,&std[i].marks);
    } 
// Printing values
    for(int i=0; i<5; i++){
        printf("Name : %s | Age : %d | Marks : %.2f \n",std[i].name,std[i].age,std[i].marks);
    } 

    return 0;
}