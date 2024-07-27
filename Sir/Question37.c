// Write a program for bubble sort..

#include <stdio.h>

int main() {
    int arr[10], n, i, d, temp;
    
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Bubble sort logic
    for (i = 0; i < n - 1; i++) {
        for (d = 0; d < n - i - 1; d++) {
            if (arr[d] > arr[d + 1]) {
                temp = arr[d];
                arr[d] = arr[d + 1];
                arr[d + 1] = temp;
            }
        }
    }
    
    printf("Sorted list:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
