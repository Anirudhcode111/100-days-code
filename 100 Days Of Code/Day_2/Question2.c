// Delete an element from an array.

#include <stdio.h>

int main(){
    int arr[6] , n = 5;
    int pos;

    
    for(int i = 0 ; i < n ; i++){
         printf("Enter array elements: ");
         scanf("%d" , &arr[i]);
    }

    
    printf("The given array is:\n");
    for(int i = 0 ; i < n ; i++){
       printf("%d " , arr[i]);
    }


    
    printf("\nPosition of element to delete: ");
    scanf("%d" , &pos);

    pos = pos - 1; 

    
    for(int i = pos ; i < n-1 ; i++){
        arr[i]= arr[i+1];
    }
    n--;

    
    printf("The updated array is:\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }

    return 0;
}