#include <stdio.h>
#include <stdlib.h>

#define Size 100

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} MyQueue;

struct Node* createNode(int val){
    struct Node* newnode = malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

MyQueue* createQueue() {
    MyQueue* q = malloc(sizeof(MyQueue));
    q->front = NULL;
    q->rear = NULL;
    return q;
}

void enqueue(int val , MyQueue* q){
    struct Node* newNode = createNode(val);

    if(q->rear == NULL){
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    q->rear->next = q->front;
}

void dequeue(MyQueue* q){
    if(q->front == NULL){
        q->rear = NULL;
        printf("Underflow");
        return;
    }
    
    int val = q->front->data;

    if(q->front == q->rear) {
        struct Node* temp = q->front;
        free(temp);
        q->front = NULL;
        q->rear = NULL;
    } else {
        struct Node *temp = q->front;
        q->front = q->front->next;
        q->rear->next = q->front;
        free(temp);
    }

    printf("Dequeued: %d\n" , val);
}

void display(MyQueue * q){
    if(q->front == NULL){
        printf("Queue is empty.");
        return;
    }

    struct Node* temp = q->front;

    do { 
        printf("%d " , temp->data);
        temp = temp->next;
    } while (temp != q->front);

    printf("\n");
}

int main(){

    MyQueue* q = createQueue();

    int n;
    printf("Enter no. of elements: ");
    scanf("%d" , &n);

    for(int i = 0; i < n ; i++){
        int val;
        printf("Enter element %d: " , i + 1);
        scanf("%d" , &val);
        enqueue(val, q);
    }
    display(q);

    int d;
    printf("Enter element to deque: ");
    scanf("%d" , &d);


    for(int i = 0 ; i < d ; i++) {
        dequeue(q);
    }

    display(q);

    return 0;
}
