// Traversing the single linked list and cound the number of nodes

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node *link;
};

// function to count numbers of nodes
void count_nodes(struct node *head){
    int count = 0 ;
    if (head == NULL){
        printf("Linked list is empty ");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++ ;
        ptr = ptr->link;
    }
    printf("Total Number of node/nodes : %d \n",count);

}

int main()
{   
    struct node *head = malloc(sizeof(struct node));
    head->data = 22;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 36;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 55;
    current->link = NULL;
    head->link->link = current;

    count_nodes(head);
    
    return 0;
}

