#include <stdio.h>

int power(int base , int exponent){
    if (exponent == 0)
        return 1;    // Base Case

    else 
        return base * power(base , exponent - 1);
}

int main(){
    int base , exponent;

    printf("Enter Base: ");
    scanf("%d" , &base);

    printf("Enter Exponent: ");
    scanf("%d" , &exponent);

    int result = power(base,exponent);

    printf("Result = %d" , result);

    return 0;
}