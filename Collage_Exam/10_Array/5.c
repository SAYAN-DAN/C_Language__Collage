// WAP to perform following actions on an array entered by the user:
// v) Remove the duplicates from the array

#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    int uniqueElements[100]; // Assuming a maximum of 100 unique elements
    int index = 0;

    // Iterate through the array
    for (int i = 0; i < *size; i++) {
        // Check if the current element is not already in the unique elements array
        int j;
        for (j = 0; j < index; j++) {
            if (arr[i] == uniqueElements[j]) {
                break;
            }
        }
        // If the element is not found, add it to the unique elements array
        if (j == index) {
            uniqueElements[index++] = arr[i];
        }
    }

    // Update the size of the array to reflect the number of unique elements
    *size = index;

    // Copy the unique elements back to the original array
    for (int i = 0; i < *size; i++) {
        arr[i] = uniqueElements[i];
    }
}

int main() {
    int arr[7] = {1, 2, 3, 4, 2, 6, 7};
    int size = 7;

    // Remove duplicates from the array
    removeDuplicates(arr, &size);

    // Print the array after removing duplicates
    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
