#include <stdio.h>

int main(){
    int n;

    printf("Enter size of matrix: ");
    scanf("%d" , &n);

    int mat[n][n];

    printf("Enter elements of matrix: ");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ; j++){
        scanf("%d" , &mat[i][j]);
    }
}

    int isIdentity = 1;

    for(int i = 0;i < n;i++){
        for(int j = 0 ; j < n ; j++){

            if(i==j){
                if(mat[i][j] != 1){
                    isIdentity = 0;
                    break;
                }
            }
            else{
                if(mat[i][j] != 0){
                    isIdentity = 0;
                    break;
                }
            }
        }

        if(isIdentity==0){
            break;
        }
    }
    if(isIdentity){
        printf("Matrix is an Identity Matrix\n");
    }
    else{
        printf("Matrix is NOT an Identity Matrix\n");
    }

    return 0;
}