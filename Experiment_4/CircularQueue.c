// Implement the concept of circular queue using array.

#include <stdio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

int isFull(){
    return (front == (rear + 1) % size);
}

int isEmpty(){
    return (front == -1);
}

void enqueue(int value) {
    if(isFull()) {
        printf("Overflow\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
    }

    rear =  (rear + 1) % size;
    queue[rear] = value;
    printf("Inserted %d\n", value);
}

int dequeue(){
    if(isEmpty()){
        printf("UNDERFLOW\n");
        return -1;
    }

    int value = queue[front];
    if(front == rear) {
        front = rear = -1;
    }
    else{
        front = (front + 1) % size;
     }

     return value;
}

void display(){
    if(isEmpty()){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    int i = front;
    while(1){
        printf("%d " , queue[i]);
        if( i == rear) break;
        i = (i+1) % size;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    
    display();
    
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    
    display();
    
    enqueue(60);
    enqueue(70);
    
    display();
    
    return 0;
}