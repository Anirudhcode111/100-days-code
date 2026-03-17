#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value){
    if(top == MAX - 1){
        printf("Stack is overflow");
        return 0;
    }

    else{
        top++;
        stack[top] = value;
        printf("%d element popped" , value);
    }
}

    void pop(){
        if(top == -1){
            printf("Stack is underflow");
            return 0;
        }

        else{
            printf("%d popped from the stack" , stack[top]);
            top--;
        }
    }

    void display(){
        if(top == -1){
            printf("Stack is empty");
        }

        else{
            printf("Elements in stack(top to bottom): ");
            for(int i = top ; i >=0 ; i--){
                printf("%d" , stack[i]);
            }
        }
    }

    int main(){
        int n , m , value;

        printf("Enter number of elements to push: ");
        scanf("%d" , &n);

        printf("Enter values of %d elements: " , n);
        for(int i = 0 ; i < n ; i++){
            scanf("%d" , &value);
            top++;
        }

        printf("Enter element to pop from stack: ");
        scanf("%d" , &m);

        for(int i = 0 ; i < m ; i++){
            pop();
        }

        display();

        return 0;

    }
