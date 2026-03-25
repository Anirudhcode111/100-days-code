#include <stdio.h>

#define size 6

int queue[size];

int r = -1;
int f = -1;

void enqueue(int value){
    if(isFull()){
        printf("Overflow");
        return;
    }

    r = (r + 1) % size;
    queue[r] = value;
}

void dequeue(){
    if(isEmpty()){
        printf("Underflow");
        return;
    }
}
