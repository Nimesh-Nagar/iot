// Inserting a Node at a Certain Position // "I love Programming"  || add --> "c and python"

#include <stdio.h>
#include <stdlib.h>

struct node{
    char *string;
    struct node *link;
};

//adding node at the end 
void add_at_end(struct node *head, char string[20]){
    struct node *ptr, *temp;
    ptr = head;

    temp = (struct node* )malloc(sizeof(struct node));
    temp->string = string;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;

}

void add_at_pos(struct node *head , char data[20], int pos){
    //ptr = head , ptr will point to first node 
    struct node *ptr = head;
    
    //creates node to add at certain poitions
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->string = data;
    ptr2->link = NULL;

    //to add at certain position
    pos--;
    while(pos !=1){
        ptr = ptr->link;
        pos--;
    }

    //first update the link of "new node" to be inserted 
    ptr2->link = ptr->link;
    //then update the link of "previous node"
    ptr->link = ptr2;
}

int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->string="I";
    head->link=NULL;

    add_at_end(head, "Love");
    add_at_end(head, "Programming");

    char data[20] = "C and Python" ;
    int  position = 3;

    add_at_pos(head,data,position);

    struct node *ptr = head; // ptr POINTER is created to traverse to all nodes and verify the process

    while(ptr != NULL){
        printf("%s ",ptr->string);
        ptr = ptr->link;
    }

    return 0;
}
