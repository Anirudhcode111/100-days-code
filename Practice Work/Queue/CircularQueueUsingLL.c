#include <stdio.h>

struct node{
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;

    if(front == NULL){
        front = rear = temp;
        rear->next = front;
    }else {
        temp->next = front;
        rear->next = temp;
        rear = temp;
    }
}

void dequeue(){
    if(front ==  NULL){
        printf("Underflow");
        return;
    }

    struct node* temp = front;
    printf("deleted: %d" , temp->data);

    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
        rear->next = front;
    }

    free(temp);
}