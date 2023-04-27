/*  Block Read/Write 
The functions fread() and fwrite() are used to read and write blocks of data from files. 
Each block has some fixed size it may be structure or an array.
Although we can read or write any data varying from a single character to structutes and arrays through these functions,
these are mainly use to read and write tructures and arrays.
For using these functions,the file is generally opened in binnary mode ("wb", "rb").

*/
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
    
    fp=fopen("school","wb");
    if(fp == NULL)
    {
        printf("Error in opening the file \n");
        exit(1);
    }

    printf("Enter Number of Records : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Enter name of student : ");
        scanf("%s",student.name);

        printf("Enter Roll Number of student : ");
        scanf("%d",&student.rollno);

        printf("Enter Marks of Student : ");
        scanf("%f",&student.marks);

        fwrite(&student,sizeof(student),1,fp);  // fwrite( "data to read from", "size of item in bytes", "number of blocks to read", "fp on which data u want to write"  )
    }

    fclose(fp);

    return 0;
}
