#include<stdio.h>
 
int main(){
    int n;
    printf("Enter Size: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements:\n");
    for(int i = 0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Array elements: ");
    for(int i =0;i<n;i++){
        printf("%d" , arr[i]);
    }
    return 0;
}