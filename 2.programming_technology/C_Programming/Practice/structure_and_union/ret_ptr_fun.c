// How a pointer to structure is returned from a function 

# include <stdio.h>

struct student 
{
    char name[20];
    int rollno;
    int marks;
};

struct student *func(struct student *p1, struct student *p2)
{
    if (p1->marks > p2->marks){
        return p1;
    }
    else{
        return p2;
    }
}

void display(struct student *stuptr)
{
    printf("Name : %s \n",stuptr->name);
    printf("Roll No : %d \n",stuptr->rollno);
    printf("Mark : %d\n",stuptr->marks);
}

int main(int argc, char const *argv[])
{
    struct student *stuptr;
    struct student stu1 = {"Nimesh",23,78}, stu2 = {"Abhishek",20,69};

    stuptr = func(&stu1,&stu2);
    display(stuptr);

    return 0;
}
