// Single linked list with three nodes

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

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

    printf("Node 1 data : %d \n",head->data);
    printf("Node 2 data : %d \n",head->link->data);
    printf("Node 3 data : %d \n",current->data);
    printf("\n");
    printf("node 1 addr : %p \n " ,head->link);
    printf("node 2 addr : %p \n ",head->link->link );
    printf("node 3 addr : %p \n ",current->link);
 
    return 0;
}
