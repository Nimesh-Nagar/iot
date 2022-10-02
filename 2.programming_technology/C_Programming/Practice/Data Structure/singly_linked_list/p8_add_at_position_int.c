
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node* head, int data){
    struct node *ptr , *temp;
    ptr = head;

    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link; 
    }

    ptr->link = temp;

}

void add_at_position(struct node *head, int data, int loc){

    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node)); // new node to add
    ptr2->data = data;
    ptr2->link = NULL;

    loc--;
    while(loc != 1){
        ptr = ptr->link;
        loc--;
    }
    
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}



int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    add_at_end(head, 22);
    add_at_end(head, 32);
    
    int data = 69, loc =3 ;
    add_at_position(head, data, loc);

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
