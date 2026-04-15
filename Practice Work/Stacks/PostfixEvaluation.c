// #include <stdio.h>
// #include <ctype.h>

// #define MAX 100

// int evaluatePostfix(char exp[]){


// int stack[MAX];
// int top = -1;

// for(int i = 0; exp[i] != '\0' ; i++){

//     if(isdigit(exp[i])){
//         stack[++top] = exp[i] - '0';
//     }

//     else{
//         int val2 = stack[top--];
//         int val1 = stack[top--];

//         switch(exp[i]){
//             case '+': stack[++top] = val1 + val2; break;
//             case '-': stack[++top] = val1 - val2; break;
//             case '*': stack[++top] = val1 * val2; break;
//             case '/': stack[++top] = val1 / val2; break;
//         }
//     }
// }

//     return stack[top];
// }

// int main(){
//     char exp[] = "23*5+";

//     int result = evaluatePostfix(exp);

//     printf("Result = %d\n" , result);

//     return 0;
// }




#include <stdio.h>
#include <ctype.h>

#define MAX 100

int evaluatePostfix(char exp[]){
    int stack[MAX];
    int top = -1;

    for(int i = 0; exp[i] != '\0' ; i++){
        if(isdigit(exp[i])){
            stack[++top] = exp[i] - '0';
        }

        else{
            int val2 = stack[top--];
            int val1 = stack[top--];

            switch(exp[i]){
                case '+': stack[++top] = val1 + val2; break;
                case '-': stack[++top] = val1 - val2; break;
                case '*': stack[++top] = val1 * val2; break;
                case '/': stack[++top] = val1 / val2; break;
                
            }
        }
    }

    return stack[top];
}

int main(){
    char exp[] = "23*5+";

    int result = evaluatePostfix(exp);

    printf("Result = %d\n" , result);

    return 0;
}
