#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX - 1){
        stack[top] = value;
        printf("%d pushed into stack\n" , value);
    }
    
}

void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d popped from stack\n" , stack[top]);
        top--;
    }     
}

void display() {
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Remaining stack elements (top to bottom): ");
        for(int i = top ; i >= 0 ;i--){
            printf("%d" , stack[i]);
        }
    }
}

int main() {
    int n , m , value;

    printf("Enter number of elements to push: ");
    scanf("%d" ,&n);

    printf("Enter %d elements:\n" , n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &value);
        psuh(value);
    }
    printf("Enter number of elements to pop: ");
    scanf("%d" , &m);

    for(int i = 0 ; i < m ; i++) {
        pop();
    }

    display();

    return 0;
}