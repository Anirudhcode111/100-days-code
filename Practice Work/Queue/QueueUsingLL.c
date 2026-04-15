#include <stdio.h>

struct node { 
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;

    if(front == NULL){
        front = rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}

void dequeue(){
    if(front == NULL){
        printf("Underflow");
        return;
    }

    struct node* temp = front;
    printf("Deleted: %d" , temp->data);

    front = front->next;

    if(front == NULL){
        rear = NULL;
    }
    
    free(temp);
}