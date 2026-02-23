// Implement linear search to find key k in an array. Count and display the number of comparisons performed.

#include<stdio.h>

int main(){
    int n , comp_count = 0;
    int key_found = 0;
    
    printf("Enter no. of elements: ");
    scanf("%d" , &n);
    
    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    int key;
    printf("Enter Key to be found: ");
    scanf("%d" , &key);

    for(int i = 0 ; i < n ; i++){
        comp_count++;

        if(arr[i] == key){
            printf("Key found at index %d\n" , i);
            key_found = 1;
            break;
        }
    }

    if(key_found == 0){
        printf("Key not found\n");
    }

    printf("Number of comparisons: %d\n" , comp_count);

    return 0;
}