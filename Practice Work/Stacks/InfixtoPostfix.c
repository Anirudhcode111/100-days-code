// #include <stdio.h>

// char stack[100];
// int top = -1;

// void push(char x){
//     stack[++top] = x;
// }

// char pop(){
//     return stack[top--];
// }

// int priority(char op){
//     if(op == '+' || op == '-') return 1;
//     if(op == '*' || op == '/') return 2;
//     return 0;
// }

// int main(){
//     char exp[] = "A+(B*C)";
//     char ch;

//     for(int i = 0; exp[i] != '\0'; i++){

//         ch = exp[i];

//         // operand
//         if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
//             printf("%c", ch);
//         }

//         // '('
//         else if(ch == '('){
//             push(ch);
//         }

//         // ')'
//         else if(ch == ')'){
//             while(top != -1 && stack[top] != '('){
//                 printf("%c", pop());
//             }
//             if(top != -1) pop(); // remove '(' safely
//         }

//         // operator
//         else{
//             while(top != -1 && priority(stack[top]) >= priority(ch)){
//                 printf("%c", pop());
//             }
//             push(ch);
//         }
//     }

//     // remaining stack
//     while(top != -1){
//         printf("%c", pop());
//     }

//     printf("\n");
//     return 0;
// }

#include <stdio.h>
 
char stack[100];
char top = -1;

void push(char x){
    stack[++top] = x;
}

char pop(){
    return stack[top--];
}

int priority(char op){
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int main(){
    char exp[] = "A+(B*C)";
    char ch;

    for(int i = 0 ; exp[i] != '\0' ; i++){
        
        ch = exp[i];

        if((ch >= 'A' && ch <= 'Z') || (ch <= 'a' && ch >= 'z')){
            printf("%c" , ch);
        }

        else if(ch == '('){
            push(ch);
        }

        else if(ch == ')'){
            while(top != -1 && stack[top] != '('){
                printf("%c" , pop());
            }
            if(top != -1) pop();
        }

        else{
            while(top != -1 && priority(stack[top]) >= priority(ch)){
                printf("%c" , pop());
            }
            push(ch);
        }
    }

    while (top != -1){
        printf("%c" , pop());
    }

    printf("\n");
    return 0;
}