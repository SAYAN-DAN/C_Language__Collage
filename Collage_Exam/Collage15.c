//  Write a program to find sum of n elements entered by the user. To write this program, allocate
// memory dynamically using malloc() / calloc() functions or new operator.

#include <stdio.h>
#include <stdlib.h> // Required for malloc and free functions

int main() {
    int n, *arr, sum = 0;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically to store n integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return error code
    }

    // Prompt the user to enter the elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of the elements: %d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
