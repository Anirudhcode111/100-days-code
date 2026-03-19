#include <stdio.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(char c){
    stack[top++] = c;
}

char pop(){
    return stack[top--];
}

char peek(){
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int isOperand(char c){
    return (c >= 'A' && c <='Z')||
           (c >= 'a' && c <='z')||
           (c >= '0' && c <='9'); 
}


int precedence(char c){
    if(c=='+' || c == '-') return 1;
    if(c=='/' || c == '*') return 2;
    if(c== '^')            return 3;
}



void infixToPostfix(char infix[] , char postfix[]){
    int i = 0;
    int j = 0;

    while(infix[i] != '\0'){
        char c = infix[i];

        if(isOperand(c)) {
            postfix[j++] = c;
        }

        else if (c=='('){
            push(c);
        }

        else if( c== ')'){
            while(!isEmpty() && peek() != '(') {
                postfix[j++] = pop();
            }
            pop();
        }   

        else{
            while(!isEmpty() && precedence(peek()) >= precedence(c)) {
                postfix[j++] = pop();
            }
            push(c);
        }

        i++;
    }
    
    while (!isEmpty()) {
        postfix[j++] = pop();
    }
 
    postfix[j] = '\0'; 
}
 
int main() {
    char infix[MAX], postfix[MAX];
 
    printf("Enter infix expression: ");
    scanf("%s", infix);
 
    infixToPostfix(infix, postfix);
 
    printf("Postfix expression:     %s\n", postfix);
 
    return 0;
}
 

