#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* createhead(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = NULL;
}

struct node* delete_at_beginning(struct node* head){
    
    if(head == NULL){
        printf("List is empty.\n");
        return head;
    }

    struct node* temp = head;

    head = head->next;
    free(temp);

    return head;


}

