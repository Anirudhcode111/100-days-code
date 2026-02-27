#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Display function
void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at given position
struct Node* insertAtPosition(struct Node *head, int value, int position) {
    struct Node *newNode, *temp;
    int i;

    // Step 1: malloc
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    // Step 2: if position = 1 (beginning)
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    // Step 3: position-1 tak jao
    temp = head;
    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Step 4: invalid position check
    if (temp == NULL) {
        printf("Invalid position!\n");
        return head;
    }

    // Step 5: 2 links change (MOST IMPORTANT)
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

int main() {
    struct Node *head = NULL, *temp, *newNode;
    int n, i, value, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Creating initial linked list
    for (i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    printf("\nLinked List before insertion:\n");
    display(head);

    // Insertion input
    printf("\nEnter value to insert: ");
    scanf("%d", &value);
    printf("Enter position: ");
    scanf("%d", &pos);

    head = insertAtPosition(head, value, pos);

    printf("\nLinked List after insertion:\n");
    display(head);

    return 0;
}
