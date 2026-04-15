#include <stdio.h>

int arr[100];
int top1 = -1;
int top2 = 100;

int isFull(){
    return (top1 + 1 == top2);
}

int isEmpty1(){
    return (top1 == -1);
}

int isEmpty2(){
    return (top2 == 100);
}

void push1(int x){
    if(isFull()){
        printf("Overflow\n");
        return;
    }
    arr[++top1] = x;
}

void push2(int y){
    if(isFull()){
        printf("Overflow\n");
        return;
    }
    arr[--top2] = y;
}

int pop1(){
    if(isEmpty1()){
        printf("Underflow\n");
        return -1;
    }
    return arr[top1--];
}

int pop2(){
    if(isEmpty2()){
        printf("Underflow\n");
        return -1;
    }
    return arr[top2++];
}