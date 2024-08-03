// Write a program Transpose a matrix...
#include <stdio.h>
int main() {
    int m, n, i, j;

    // Input number of rows and columns
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d%d", &m, &n);

    int matrix[m][n], transpose[n][m];

    // Input elements in the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
    printf("Transposed Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
