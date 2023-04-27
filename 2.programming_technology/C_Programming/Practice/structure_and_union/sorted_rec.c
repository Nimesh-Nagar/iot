/* write a program to calculate the total markes and grade of students and then sort the names of students 
   on the bases of marks and print the sorted records.
*/

#include<stdio.h>
#define N 3

struct student
{
    char name[20];
    int rollno;
    int marks[4];
    int total;
    char grade;
};

void cal_marks(struct student stu[]);
void sort_stu(struct student stu[]);
void display(struct student stu);


int main(int argc, char const *argv[])
{
    struct student stu[N];

    for(int i=0; i<N; i++)
    {
        int n=i;
        n+=1;
        printf("Enter Name of Student %d : ",n);
        scanf("%s",stu[i].name);
        printf("Enter Roll Number of Student %d : ",n);
        scanf("%d",&stu[i].rollno);
        stu[i].total = 0;
        printf("Enter marks of 4 subjets : ");
        for(int j=0; j<4; j++){
            scanf("%d",&stu[i].marks[j]);
        }
        printf("\n");

    }

    cal_marks(stu);
    sort_stu(stu);
    for(int i=0; i<N; i++){
        display(stu[i]);
    }

    return 0;
}

//function to calculate total marks
void cal_marks(struct student stu[])
{
    for(int i=0; i<N; i++){
        for(int j=0; j<4; j++){
            stu[i].total += stu[i].marks[j];
        }
        if(stu[i].total > 360)
            stu[i].grade = 'A';

        else if(stu[i].total > 300)
            stu[i].grade = 'B';

        else if(stu[i].grade > 200)
            stu[i].grade = 'C';

        else
            stu[i].grade = 'D';
    }
}

// function to sort students acc to marks
void sort_stu(struct student stu[])
{
    struct student temp;
    for(int i=0; i<N-1;i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(stu[i].total < stu[j].total)
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }

}


//Function to dispaly results
void display(struct student stu)
{
    printf("****************************************\n");
    printf("Roll No. : %d \t",stu.rollno);
    printf("Name : %s \n",stu.name);
    printf("Total Marks : %d \t",stu.total);
    printf("Grade : %c \n\n",stu.grade);
   
}