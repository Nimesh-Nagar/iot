// Deleteing last node in list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* del_last(struct node *head){
    if (head == NULL){
        printf(" Linked list is already Empty ");
    }
    else if(head->link == NULL){
        free(head);
        head = NULL;
    }
    else{

        struct node *temp = head;
        struct node *temp2 = head;
        while(temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
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

    // deleting last node

    head = del_last(head); 
    struct node *ptr = head;
    
    while(ptr !=NULL ){
        printf("%d ",ptr->data);
        ptr = ptr->link;

    }

    return 0;
}
