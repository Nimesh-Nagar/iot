// node for doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node* add_at_beg(struct node* head, int data)
{
//new node
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

// connecting new and existing node
    temp->next = head; 
    head->prev = temp;

    head = temp;
    return head;

}

struct node *add_at_end(struct node *head , int val){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = val;
    temp->next = NULL;

    struct node *tp = head;
    while (tp->next != NULL){
       tp = tp->next;
    } 
    tp->next = temp;
    temp->prev = tp; 
    return head;

}


int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node)); //allocating memory to structure node
    struct node *ptr;
    head->prev = NULL;
    head->data = 22;
    head->next = NULL;

    head = add_at_beg(head,11);
    head = add_at_beg(head,32);
    head = add_at_end(head,20);

    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
