#include <stdio.h>

int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%s" , &str);

    int n = strlen(str);
    int flag = 1;

    int i = 0;
    int j = n-1;

    while(i < j){
        if(str[i] != str[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        printf("its a palindrome.");
    }
    else{
        printf("its not a palindrome");
    }
    return 0;
}