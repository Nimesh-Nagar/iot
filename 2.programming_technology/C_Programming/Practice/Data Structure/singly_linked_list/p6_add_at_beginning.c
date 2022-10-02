// Adding node at the beginning of linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

//function to add node at beginning
struct node* add_begin(struct node* head, int d){

//node is created to  add at beginning
    struct node *ptr = malloc(sizeof(struct node));  
    ptr->data = d;
    ptr->link = NULL;

//updating ptr addr with head because we have to add at the beginning    
    ptr->link = head;
    head = ptr;
    return head;
}

int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node*));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->link = NULL;
    head->link = ptr;

    int data = 3;

    head = add_begin(head,data);
    ptr = head;
    while(ptr != NULL){
        printf("DATA : %d, ",ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
