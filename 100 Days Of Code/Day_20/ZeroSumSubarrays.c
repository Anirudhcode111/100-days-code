#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int prefix_sum = 0;

    // Using simple array as hash (range adjust if needed)
    int freq[10001] = {0};   // assume prefix sum range
    int offset = 5000;       // handle negative sums

    freq[offset] = 1;  // prefix sum = 0 initially

    for(int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        count += freq[prefix_sum + offset];
        freq[prefix_sum + offset]++;
    }

    printf("%d\n", count);

    return 0;
}