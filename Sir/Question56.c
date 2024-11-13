#include <stdio.h>

int main() {
    int a[3][3];
    int b[3][3];
    int multiplication[3][3] = {0};  // Initialize result matrix to 0

    // Taking input for Matrix-1
    printf("Enter elements for Matrix-1 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Taking input for Matrix-2
    printf("Enter elements for Matrix-2 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            multiplication[i][j] = 0; // Initialize the current element to 0
            for (int k = 0; k < 3; k++) {
                multiplication[i][j] += a[i][k] * b[k][j];  // Perform the dot product
            }
        }
    }

    // Printing the Result of Matrix Multiplication
    printf("Multiplication of the two matrices is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", multiplication[i][j]);
        }
        printf("\n");
    }

    return 0;
}
