#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char data[20];
    struct node *next;
};

int stack[100];
int top = -1;

void push(int val){
    stack[++top] = val;
}
int pop(){
    return stack[top--];
}

struct node*createNode(char* value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    strcpy(newnode->data , value);
    newnode->next = NULL;

    return newnode;
}

int main(){
    int n;
    printf("Enter number of tokens: ");
    scanf("%d", &n); 

    char token[20];
    struct node *head = NULL, *tail = NULL;

    for (int i = 0; i < n; i++) {
        scanf("%s", token); 
        struct node* newnode = createNode(token);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    struct node* temp = head;

    while(temp != NULL){
        char* t = temp -> data;

        if (strcmp(t ,"+")== 0 || strcmp(t , "-") == 0 ||
            strcmp(t, "*")== 0 || strcmp(t,"/")== 0) {
                int b = pop();
                int a = pop();

                int result;

                if(strcmp(t , "+") == 0) result = a + b;
                else if (strcmp(t , "-")==0) result = a - b;
                else if (strcmp(t , "*")==0) result = a * b;
                else result = a / b;

                push(result);
            }
            else{
                push(atoi(t));
            }
            temp = temp -> next;

            }

            printf("%d\n" , pop());

            return 0;
        }
    

