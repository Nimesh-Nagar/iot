#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[MAX];  // stack
int top = -1 ;       // indicates stack is empty

//function for push operation
void push(int data){

    if(top == MAX - 1){
        printf("\n Stack Overflow \n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

int pop(){
    int value;
    if(top == -1){
        printf("\n Stack Underflow \n");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;

}


void display(){
//display
    printf("Stack : ");
    for(int i = 0; i < MAX; i++){
        printf("%d ",stack_arr[i]);
    }
    printf("\n");
}

void print(){

    if(top == -1){
     printf("Stack Underflow \n");
     return;
    }
    
    printf("After POP :");
    for (int i=0 ; i<=top; i++){
        printf("%d ",stack_arr[i]);   
    }
    printf("\n");
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    display();
    // push(5);
    int data = pop();
    data = pop();
    print();
    
    return 0;
}


