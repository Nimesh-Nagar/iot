// adding node at the end of linked list:;
#include <stdio.h>
#include <stdlib.h>

// to create node  
struct node{
    int data;
    struct node *link;
};

//adding node at the end 
void add_at_end(struct node *head, int data)
{
    struct node *ptr ,*temp; 
    ptr = head;

    temp =(struct node*) malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    //traversing through nodes
    while(ptr->link != NULL){
        ptr = ptr->link; 
    }
    ptr->link = temp;
}

//searching techinique
void searching(struct node *head, int find){
    struct node *ptr = head;

    while(ptr != NULL ){
        if(ptr->data == find){
            printf("Hurray DATA found \n");
            return ;
        }
        ptr = ptr->link;
    }
   printf("Ops DATA not found \n");
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

    add_at_end(head,67);
    add_at_end(head,22);
    
//Searching the data in nodes
    int find;
    printf("Enter data to rearch : ");
    scanf("%d",&find);

    searching(head,find);

    return 0;
}
