// modify the record

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct record{
    char name[20];
    int rollno;
    float marks;
}student;

int main(int argc, char const *argv[])
{
    FILE *fp;
    char name_f[20];
    int flag = 0;

    if( (fp = fopen("school","rb+")) == NULL)
    {
        printf("Error in open file ");
        exit(1);
    }

    printf("Enter Name whose record to modify : ");
    scanf("%s",name_f);

    while(fread(&student,sizeof(student),1,fp) == 1)
    {
        if( strcmp(student.name , name_f) == 0 )
        {
            printf("--- Enter New Data ---\n");

            printf("Enter name : ");
            scanf("%s",student.name);
            printf("Enter roll no : ");
            scanf("%d",&student.rollno);
            printf("Enter marks : ");
            scanf("%f",&student.marks);

            fseek(fp,-(sizeof(student)),1);
            fwrite(&student,sizeof(student),1,fp);

            flag = 1;
            break;
        }
    }
    
    if(flag==0){
        printf("Nmae not found \n");
    }
    else{
        printf("Record Modified ----------\n ");
    }

    fclose(fp);
    return 0;
}
