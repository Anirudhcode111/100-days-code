#include <stdio.h>

#define MAX 100

int stack[MAX];
int minStack[MAX];

int top = -1;
int minTop  = -1;

void push(int x){
    stack[++top] = x;

    if(minStack == -1){
        minStack[++minTop] = x;
    }

    else{
        int currentMin = minStack[minTop];
        if(x < currentMin){
            minStack[++minTop] = x;
        }
        else{
            minStack[++minTop] = currentMin;
        }
    }
}

void pop(){
    if(top == -1){
        printf("Underflow\n");
        return;
    }

    printf("Popped: %d\n" , stack[top]);
    top--;
    minTop--;
}

int getMin(){
    if(minTop == -1) return -1;
    return minStack[minTop];
}

