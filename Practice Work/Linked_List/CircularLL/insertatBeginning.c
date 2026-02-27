#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* create(){
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* newnode;
    int choice = 1;


    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d" , &newnode->data);
        newnode->next = NULL;

        if(head == NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    
        printf("Add(0,1): ");
        scanf("%d" , &choice);
    }

        if(temp != NULL){
            temp->next = head;
        }
        return head;
    }

    struct node* insert_at_beginning(struct node* head , int data){

            struct node* newnode = (struct node*)malloc(sizeof(struct node));
            newnode->data = data;


            if(head == NULL){
                newnode->next = newnode;
                return newnode;
            }

            struct node* temp = head;

            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head;
            head = newnode;

            return head;
    }

    void display(struct node* head){
        
        if (head == NULL){
            printf("List is empty\n");
            return;
        }
        
        struct node* temp = head;

        do{
            printf("%d" , temp->data);
            temp = temp->next;
        } while(temp != head);

        printf("\n");
    }
    int main(){
        struct node* head = NULL;

        head = create();

        printf("Original List:\n");
        display(head);

        head = insert_at_beginning(head,99);

        printf("After inserting 99 at beginning:\n");
        display(head);

        return 0;
    }
