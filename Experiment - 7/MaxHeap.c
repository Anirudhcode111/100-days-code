#include <stdio.h>

#define MAX 100

int heap[MAX], size = 0;

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

void insert(int val) {
    heap[size] = val;
    int i = size++;

    
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (heap[parent] < heap[i]) {   
            swap(&heap[parent], &heap[i]);
            i = parent;
        } else {
            break;
        }
    }
}

void printHeap() {
    printf("Heap: ");
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int main() {
    int values[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
        insert(values[i]);

    printf("After inserting 10 20 30 40 50:\n");
    printHeap();

    insert(15);
    printf("After inserting 15:\n");
    printHeap();

    return 0;
}