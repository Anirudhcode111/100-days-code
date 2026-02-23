#include<stdio.h>

int main(){
    int n , i , j;

    printf("enter the order of square matrix: ");
    scanf("%d" , &n);

    int matr[n][n];

    printf("Enter elements of the matrix: ");
    for(int i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            scanf("%d" , &matr[i][j]);
        }
    }

    int isSymmetric = 1;

    for(i = 0 ; i < n ; i++){
        for(j = i + 1 ; j < n ; j++){
            if(matr[i][j] != matr[j][i]){
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
            break;
        
    }
    if(isSymmetric)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is NOT Symmetric.\n");

    return 0;
}