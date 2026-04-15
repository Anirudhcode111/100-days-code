#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* top = NULL;

int isEmpty(){
    return (top == NULL);
}

void push(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("overflow(Memory failed)");
        return;
    }

    newnode->data = value;
    newnode->next = top;
    top = newnode;
}


void pop(){
    if(isEmpty()){
        printf("Underflow");
        return;
    }

    struct node* temp = top;
    printf("%d popped" , top->data);
    top = top->next;
    free(temp);
}

void display(){
    if(isEmpty()){
        printf("Stack is empty");
        return;
    }

    struct node* temp = top;

    while(temp!=NULL){
        printf("%d " , temp->data);
        temp = temp -> next;
    }
    printf("\n");
}