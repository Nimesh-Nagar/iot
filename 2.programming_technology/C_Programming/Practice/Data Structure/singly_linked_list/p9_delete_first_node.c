// Single linked list with three nodes

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* del_first(struct node *head){
    if (head == NULL){
        printf(" Linked list is already Empty ");
    }
    else{
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
}


int main(int argc, char const *argv[])
{
    // allocation memory to node
    struct node *head = (struct node* )malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node* )malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current; // providing current addr to previous node

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    // deleting first node

    head = del_first(head); 
    struct node *ptr = head;
    
    while(ptr !=NULL ){
        printf("%d ",ptr->data);
        ptr = ptr->link;

    }

    return 0;
}
