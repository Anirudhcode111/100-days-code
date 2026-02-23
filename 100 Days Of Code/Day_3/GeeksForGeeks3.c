#include <stdio.h>

int main(){
    int n; int expected_sum;
    printf("Enter number of elements: ");
    scanf("%d" , &n);
    
    int arr[n-1];
    int actual_sum = 0;

    // Input array
    printf("Enter array elements:\n" , n-1);
    for(int i = 0; i < n-1 ; i++){
        scanf("%d " , &arr[i]);
        actual_sum = actual_sum + arr[i];

    }

    expected_sum = n * ( n + 1 ) / 2;
    int missing = expected_sum - actual_sum;
    
    printf("The missing value is: %d " , missing);
    return 0;
}