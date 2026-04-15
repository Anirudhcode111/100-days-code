#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

int isfull(){
    return(rear == MAX - 1);
}

int isEmpty(){
    return(front == -1 || front > rear);
}

void enqueue(int x){
    if(isfull()){
        printf("overflow");
        return;
    }

    if(front == -1){
        front = 0;
    }

    queue[++rear] = x;
}

void dequeue(){
    if(isEmpty()){
        printf("Underflow");
        return;
    }

    int x = queue[front];
    front++;

    printf("Deleted: %d\n" , x);

    if(front > rear){
        front = rear = -1;
    }
}
