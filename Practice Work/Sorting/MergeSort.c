#include <stdio.h>

void merge(int arr[] , int l , int mid , int r){
    int i = l;
    int j = mid + 1;
    int k = 0;

    int temp[100];

    while(i <= mid && j <= r){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid){
        temp[k++] = arr[i++];
    }

    while( j <= r){
        temp[k++] = arr[j++];
    }

    for(i = l , k = 0 ; i <= r ; r++,k++){
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[] , int l , int r){
    if(l < r){
        int mid = ( l + r) / 2;

        mergeSort(arr , l , mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l , mid , r);
    }
}