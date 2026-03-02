#include <stdio.h>
#include <stdlib.h>

struct node{
    int coeff;
    struct node* next;
    int exp;
};

struct node* createNode(int coeff , int exp){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("Memory allocation Failed");
        return NULL;
    }

    newnode->coeff = coeff;
    newnode->exp = exp;
    newnode->next = NULL;

    return newnode;
}

struct node* inst_at_end(struct node* head , int coeff , int exp){
    struct node* newnode = createNode(coeff, exp);

    if(newnode == NULL){
        return head;
    }

    if(head == NULL){
        head = newnode;
        return newnode;
    }

    struct node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;
    return head;
}


void display(struct node* head){
    struct node* temp = head;

    while(temp != NULL){

        if(temp->exp > 1){
            printf("%dx^%d", temp->coeff , temp->exp);
        }
        else if(temp->exp == 1){
            printf("%dx" , temp->coeff);
        }
        else{    // exp == 0
            printf("%d" , temp->coeff);
        }

        if(temp->next != NULL){
            printf(" + ");
        }

        temp = temp->next;
    }
}

int main(){
    struct node* head = NULL;
    int n;
    int coeff , exp;

    printf("Enter number of terms: ");
    scanf("%d" , &n);

    for(int i = 0 ; i < n ; i++){
        printf("Enter coefficient and exponent: ");
        scanf("%d %d" , &coeff , &exp);

        head = inst_at_end(head , coeff , exp);
    }

    printf("polynomial: ");
    display(head);

    return 0;
}