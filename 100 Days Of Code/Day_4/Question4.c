#include <stdio.h>

int main(){
    int n, *p , *q;

    printf("Enter number of elements: ");
    scanf("%d" , &n);

    int arr[6];
    printf("Enter array elements:\n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d ", &arr[i]);
    }

    printf("The given array is: ");
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }

    int *p = &arr[0];
    int *q = &arr[n-1];
    int temp;

    while ( p < q){
        temp = *p;
        *p = *q;
        *q = temp;

        p++;
        q--;
    }

}