#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* create(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* head = NULL;

    newnode->data = value;
    newnode->next = NULL;

    return newnode;
}

struct node* delete_at_any_pos(struct node* head, int pos){
    if(head == NULL){
        printf("List is empty");
        return head;
    }

    struct node* temp = head;
    int i = 1;

    if(pos<=0){
        printf("Invalid position.");
        return head;
    }
    
    if(pos==1){
        head = head->next;
        free(temp);
        return head;
    }

    while(temp!=NULL && i < pos - 1){
        temp = temp->next;
        i++;
    }

    if(temp == NULL || temp->next == NULL){
        printf("Position out of range.\n");
        return head;
    }

    struct node* nodetodelete = temp->next;
    temp->next = nodetodelete->next;
    free(nodetodelete);

}



