#include <stdio.h>
#include <stdlib.h> // to call malloc , calloc .. function

//self referancial structure to creat node
struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL; // "head"  pointer can access data and link of "node"
    head = (struct node*)malloc(sizeof(struct node)); //allocating memory dynamically to "struct node"
            //malloc returns void pointer and it is type casted further we can avoid it also

    // in head address of "node" is stored, now head is capable to access the node datas
    head->data = 45;
    head->link = NULL;

    printf("DATA : %d \n",head->data);
    printf("LINK : %p \n",head->link);

    return 0;
}
