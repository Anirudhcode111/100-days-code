#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};


struct node* delete_at_end(struct node* head){
    if(head == NULL){
        printf("list is empty");
        return head;
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }

    struct node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return head;
}