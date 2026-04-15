#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isfull(){
    return (top == MAX - 1);
}

int isEmpty(){
    return (top == -1);
}

void push(int val){
    if(isfull()){
        printf("Overflow\n");
        return;
    }

    stack[++top] = val;
}

void pop(){
    if(isEmpty()){
        printf("Underflow\n");
        return;
    }

    printf("Popped: %d\n", stack[top]);
    top--;
}

void display(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }

    for(int i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    int choice, value;

    while(1){
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3: 
                display();
                break;
        
            case 4: 
                return 0;

            default: 
                printf("Invalid choice\n");
        }
    }    
}