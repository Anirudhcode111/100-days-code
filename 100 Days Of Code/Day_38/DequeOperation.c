#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int arr[MAX];
    int front;
    int rear;
    int size;
} Deque;

// initialize
void init(Deque* dq) {
    dq->front = -1;
    dq->rear = -1;
    dq->size = 0;
}

int empty(Deque* dq) {
    return dq->size == 0;
}

int isFull(Deque* dq) {
    return dq->size == MAX;
}

void push_front(Deque* dq, int val) {
    if (isFull(dq)) return;

    if (empty(dq)) {
        dq->front = dq->rear = 0;
    } else {
        dq->front = (dq->front - 1 + MAX) % MAX;
    }

    dq->arr[dq->front] = val;
    dq->size++;
}

void push_back(Deque* dq, int val) {
    if (isFull(dq)) return;

    if (empty(dq)) {
        dq->front = dq->rear = 0;
    } else {
        dq->rear = (dq->rear + 1) % MAX;
    }

    dq->arr[dq->rear] = val;
    dq->size++;
}

int pop_front(Deque* dq) {
    if (empty(dq)) return -1;

    int val = dq->arr[dq->front];

    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else {
        dq->front = (dq->front + 1) % MAX;
    }

    dq->size--;
    return val;
}

int pop_back(Deque* dq) {
    if (empty(dq)) return -1;

    int val = dq->arr[dq->rear];

    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else {
        dq->rear = (dq->rear - 1 + MAX) % MAX;
    }

    dq->size--;
    return val;
}

int front(Deque* dq) {
    if (empty(dq)) return -1;
    return dq->arr[dq->front];
}

int back(Deque* dq) {
    if (empty(dq)) return -1;
    return dq->arr[dq->rear];
}

// 🔥 MAIN FUNCTION (IMPORTANT)
int main() {
    Deque dq;
    init(&dq);

    push_back(&dq, 10);
    push_back(&dq, 20);
    push_front(&dq, 5);

    printf("Front: %d\n", front(&dq)); // 5
    printf("Back: %d\n", back(&dq));   // 20

    printf("Pop Front: %d\n", pop_front(&dq)); // 5
    printf("Pop Back: %d\n", pop_back(&dq));   // 20

    return 0;
}