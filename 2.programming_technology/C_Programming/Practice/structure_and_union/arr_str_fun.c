// program to understand how an array of structure is send to a function

#include <stdio.h>

struct student
{
    char name[20];
    int rollno;
    int marks;
};

void dec_marks(struct student stuarr[])
{
    for(int i=0; i<3; i++){
        stuarr[i].marks -= 10;
    }
}

void display(struct student s){
    printf("Name : %s \t",s.name);
    printf("Roll No : %d \t",s.rollno);
    printf("Marks : %d \t\n",s.marks);
    
}


int main(int argc, char const *argv[])
{
    struct student stuarr[3]={
        {"Marry", 12, 98},
        {"John", 11, 97},
        {"Tom", 13, 89}

    };

    dec_marks(stuarr);

    for(int i=0; i<3; i++){
        display(stuarr[i]);
    }

    return 0;
}
