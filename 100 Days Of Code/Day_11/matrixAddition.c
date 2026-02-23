#include <stdio.h>

int main(){
    int rows , cols;

    printf("Enter number of rows: ");
    scanf("%d" , &rows);

    printf("Enter number of columns: ");
    scanf("%d" , &cols);

    int A[rows][cols];
    int B[rows][cols];
    int C[rows][cols];

    printf("Enter elements of matrix A:\n ");
    for(int i = 0; i < rows; i++){
        for(int j = 0 ; j < cols ; j++){
            scanf("%d" , &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n ");
    for( int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            scanf("%d" , &B[i][j]);
        }
    }

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant of Matrix A + B is:\n ");
    for(int i = 0 ; i < rows ; i++){
        for( int j = 0 ; j < cols ; j++){
            printf("%4d " , C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

