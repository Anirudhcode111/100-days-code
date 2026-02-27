#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* create(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = NULL;

    return newnode;
}




struct node* insertAtBeginning(struct node* head , int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("Memory allocation failed.");
        return head;
    }

    newnode->data = value;
    newnode->next = head;
    head = newnode;

    return head;
}




int main(){
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d " , &n);

    struct node* head = NULL , *temp = NULL , *newnode;

    for(int i = 0 ; i < n ; i++){
    printf("Enter data of node %d" , i+1);
    scanf("%d" , &value);
    

    struct node* newnode = create(value);

    if(head == NULL){
        head = newnode;
        temp = newnode;
    }

    else{
        temp->next = newnode;
        temp = newnode;
    }

}

printf("Linked List: ");
temp = head;
while(temp != NULL){
     printf("%d-> " , temp->data);
     temp = temp->next;
}
print("NULL\n");

return 0;
}