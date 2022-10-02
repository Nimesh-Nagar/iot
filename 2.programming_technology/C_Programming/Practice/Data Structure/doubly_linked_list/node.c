// node for doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node)); //allocating memory to structure node
    head->prev = NULL;
    head->data = 11;
    head->next = NULL;

    printf("%d \n", head->data);
    return 0;
}
