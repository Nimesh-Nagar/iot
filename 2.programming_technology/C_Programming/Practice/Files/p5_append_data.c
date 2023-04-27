#include<stdio.h>
#include<stdlib.h>

struct record 
{
    char name[20];
    int rollno;
    float marks;
}student;

int main(int argc, char const *argv[])
{
    FILE *fp;
    int n;
    int choice = 1;
    
    fp=fopen("school","ab"); // open file in binary append mode
    if(fp == NULL)
    {
        printf("Error in opening the file \n");
        exit(1);
    }

    while(choice)
    {
        printf("Enter name of student : ");
        scanf("%s",student.name);

        printf("Enter Roll Number of student : ");
        scanf("%d",&student.rollno);

        printf("Enter Marks of Student : ");
        scanf("%f",&student.marks);

        fwrite(&student,sizeof(student),1,fp);  // fwrite( "data to read from", "size of item in bytes", "number of blocks to read", "fp on which data u want to write"  )

        printf("Want to Enter more ? (1 for YES / 0 for NO) : ");
        scanf("%d",&choice);

    }

    fclose(fp);

    return 0;
}
