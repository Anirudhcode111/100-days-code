#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow! Stack is empty\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements (Top to Bottom): ");
        for(int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int n, type, value;

    printf("Enter number of operations: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        printf("\nChoose operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &type);

        if(type == 1) {
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
        }
        else if(type == 2) {
            pop();
        }
        else if(type == 3) {
            display();
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    printf("\nProgram finished.\n");
    return 0;
}