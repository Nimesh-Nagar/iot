// Traversing each node and printing the data of linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    char *data ;
    struct node *link;
};

void count_and_print(struct node *head){
    int count = 0 ;
    if (head == NULL){
        printf("Linked list is empty ");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++ ;
        printf("%s ",ptr->data);
        ptr = ptr->link;
        
    }
    printf("\nTotal Number of nodes : %d \n",count);

}

int main()
{   
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = "I";
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = "LOVE";
    current->link = NULL;
    head->link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = "Programming";
    current->link = NULL;
    head->link->link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = "Very Much";
    current->link = NULL;
    head->link->link->link = current;

    count_and_print(head);
    
    return 0;
}