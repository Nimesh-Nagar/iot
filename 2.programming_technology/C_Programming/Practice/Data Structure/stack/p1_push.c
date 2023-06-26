#include <stdio.h>
#define MAX 4

int stack_arr[MAX];  // stack
int top = -1 ;       // indicates stack is empty

//function for push operation
void push(int data){

    if(top == MAX - 1){
        printf("\nStack Overflow \n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}


void display(){

//display
    if(top == MAX - 1){
        printf("Stack Overflow \n");
    }
    
    printf("Stack : ");
    for(int i = 0; i < MAX; i++){
        printf("%d ",stack_arr[i]);
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
//    push(5);

    display();

    push(5);
    
    return 0;
}


