#include <stdio.h>
#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

// PUSH in stack1 (enqueue)
void enqueue(int x) {
    if (top1 == MAX - 1) {
        printf("Overflow\n");
        return;
    }
    stack1[++top1] = x;
}

// POP from queue (dequeue)
int dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Underflow\n");
        return -1;
    }

    // If stack2 empty → transfer from stack1
    if (top2 == -1) {
        while (top1 != -1) {
            stack2[++top2] = stack1[top1--];
        }
    }

    return stack2[top2--];
}

// Driver code
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d\n", dequeue()); // 10
    printf("%d\n", dequeue()); // 20
    printf("%d\n", dequeue()); // 30

    return 0;
}