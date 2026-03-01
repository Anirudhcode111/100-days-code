#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at end
struct Node* insert(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Merge two sorted lists
struct Node* mergeLists(struct Node* head1, struct Node* head2) {
    struct Node dummy;   // temporary dummy node
    struct Node* tail = &dummy;
    dummy.next = NULL;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

    // Attach remaining nodes
    if (head1 != NULL)
        tail->next = head1;
    else
        tail->next = head2;

    return dummy.next;
}

// Traverse
void traverse(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int n, m, value;
    struct Node *head1 = NULL, *head2 = NULL, *merged = NULL;

    // First list
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        head1 = insert(head1, value);
    }

    // Second list
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &value);
        head2 = insert(head2, value);
    }

    merged = mergeLists(head1, head2);

    traverse(merged);

    return 0;
}