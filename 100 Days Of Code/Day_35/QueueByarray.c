#include <stdio.h>

#define size 5

int queue[size];
int front , rear = -1;

int isFull(){
    return rear == size - 1;
}

int isEmpty(){
    return front == -1;
}

void enqueue(int value){
    if (isfull()){
        printf("Overflow");
        return;
    }

    if(isEmpty()){
        front = 0;
    }

    queue[++rear] = value;
    printf("%d Enqueued" , value);
}

void dequeue(){
    if (isEmpty()){
        printf("Underflow");
        return;
    }

    printf("%d dequeued" , queue[front]);

    if(front == rear) { 
        front = -1;
        rear = -1;
    } else {
        front++;
    }
}

void display(){
        if(isEmpty()){
            printf("Queue is empty.");
            return;
        }

        printf("Queue: ");
        for(int i = front ; i <= rear ; i++){
            printf("%d " , queue[i]);
        }
        printf("\n");
}

int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d" ,&n);

    for(int i = 0 ; i < n; i++){
        int val;
        printf("Enter element %d: " , i+1);
        scanf("%d" , &val);
        enqueue(val);
    }

    display();

    int d;
    printf("Elements to dequeue: ");
    scanf("%d" , &d);

    for(int i = 0; i < d ; i++){
        dequeue();
    }

    printf("After dequeue: ");
    display();

    return 0;
}
