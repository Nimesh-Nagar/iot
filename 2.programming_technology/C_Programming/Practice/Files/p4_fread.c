
#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int rollno;
    float marks;

}stu;

int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen("school","rb");

    if(fp==NULL)
    {
        printf("Error in openting the file \n");
        exit(1);
    }
    
    printf("\nNAMES \tROLL_NO
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    \tMARKS\n");

    while(fread(&stu,sizeof(stu),1,fp) == 1 )
    {
        printf("%s\t",stu.name);
        printf("%d\t",stu.rollno);
        printf("%f\n",stu.marks);
    }
    
    fclose(fp);
    return 0;
}

