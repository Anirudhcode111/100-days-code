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


struct node* insert_at_any_pos(struct node* head , int value , int pos){
        struct node* newnode = (struct node*)malloc(sizeof(struct node));

        if(pos <= 0){
            printf("Invalid Position.");
            return head;
        }

        if(newnode == NULL){
            printf("Memory allocation failed.\n");
            return head;
        }
        
        newnode->data = value;
        newnode->next = NULL;

        if(pos==1){
            newnode->next = head;
            return newnode;
        }

        struct node* temp = head;
        int i = 1;

        while(temp != NULL && i < pos - 1){
            temp = temp->next;
            i++;
        }

        if(temp == NULL){
            printf("Position out of range\n.");
            free(newnode);
            return head;
        }

        newnode->next = temp->next;
        temp->next = newnode;

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