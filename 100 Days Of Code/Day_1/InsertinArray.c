#include <stdio.h>

int main() {
    int arr[6], n = 5;
    int pos, element;

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("\n\nEnter position (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &element);

    
    pos = pos - 1;


    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = element;
    n++;

    printf("\nArray after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
