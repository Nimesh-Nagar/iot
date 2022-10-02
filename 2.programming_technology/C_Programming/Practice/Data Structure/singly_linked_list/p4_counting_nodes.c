// Traversing the node and counting it and printing datas

#include <stdio.h>
#include <stdlib.h>

// to create node  
struct node{
    int data;
    struct node *link;
};

void count_nodes(struct node *head)
{
    int count = 0;
    if(head == NULL){
        printf("LInked List is Empty ");
    }
    else{
        struct node *ptr = NULL;
        ptr = head;
        while(ptr != NULL){
            count++ ;
            printf("Data : %d \t",ptr->data);
            ptr = ptr->link;
            
        }
        printf("\nTotal Number of Nodes: %d \n",count);
    }

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

    count_nodes(head);
 
    return 0;
}
