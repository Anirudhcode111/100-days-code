#include <string.h>
#include<stdio.h>

int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%s" , str);

    int i = 0;
    int j = strlen(str) - 1;

    while ( i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    printf("Mirrored String is: %s\n" , str);

    return 0;
}

