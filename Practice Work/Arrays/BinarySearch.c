#include<stdio.h>

int main() {
    int n, key;
    scanf("%d" ,&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
        scanf("%d" , &key);

        int low = 0 , high= n-1 , mid , found =0;

        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid]==key){
                printf("found at index %d" , mid);
                found = 1;
                break;
            }
            else if(arr[mid]<key)
                low = mid + 1;
            else
                high = mid - 1;       
        }  
    if(!found)
        printf("Not Found");

    return 0;

}