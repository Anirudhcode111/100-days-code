// Remove duplicate from Sorted array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d" , &n);

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("%d" , arr[0]); // first element

    for(int i = 1 ; i < n ; i++){
        if(arr[i] != arr[i-1]){    // arr[i-1] means just pehle wala element
            printf("%d" , arr[i]);
        }
    }

    return 0;

}