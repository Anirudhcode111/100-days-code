#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

int isfull(){
    return (front == (rear + 1) % MAX);
}

int isEmpty(){
    return (front == -1);
}

void enqueue(int x){
    if(isfull()){
        printf("Overflow");
        return;
    }

    if(front == -1){
        front = rear = 0;
    }
    else{
    rear = (rear + 1) % MAX;
    }

    queue[rear] = x;
}

void dequeue(){
    if(isEmpty()){
        printf("Underflow");
        return;
    }

    int x = queue[front];
    printf("Deleted: %d\n" , x);

    if(front == rear){
        front = rear = -1;
        return;
    }

    front = (front + 1) % MAX;

}