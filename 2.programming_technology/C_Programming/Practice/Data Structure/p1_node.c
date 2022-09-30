/*
    creating node in c. Node consists of data and link part, it is combination of two diffetent types
    we will use structure to combine two different types into one single type.
*/
#include <stdio.h>
#include <stdlib.h> // to call malloc , calloc, ... function

//NODE
struct node{
    int data;
    struct node* link;
};

int main(){
    //create a pointer "head" which pointer to struct node only. this can access data & link part only
    struct node *head = NULL;

    // malloc is used to create the memory for "node" on heap
    head = (struct node *)malloc(sizeof(struct node));  //not mandatory to typecast

    head->data = 45;
    head->link = NULL;

    printf("DATA: %d \n",head->data);
    
    return 0;
}
