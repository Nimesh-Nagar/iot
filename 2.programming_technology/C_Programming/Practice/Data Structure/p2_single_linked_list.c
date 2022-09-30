#include <stdio.h>
#include <stdlib.h>

//node
struct node{
    int data;
    struct node *link;
};


int main()
{
    //first node
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    //second node
    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    //third node (no need to create current2 pointer again we will use current pointer which was used in 2nd node )
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; // updating second node's link addr with current node's addr

    // node are linked 
    // printf("node 1 link addr : %p \n",head->link);
    // printf("current addr: %p \n",current);

    //datas 
    printf("data of node 1 : %d \n ",head->data);
    printf("data of node 2 : %d \n ",head->link->data);
    printf("date of node 3 : %d \n ",current->data);
    return 0;

}
