#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of element in the row in the matrix:\n ");
    scanf("%d", &m);
    printf("Enter the number of element in the column in the matrix:\n ");
    scanf("%d", &n);
    int matrix[m][n];
    int sum = 0;
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    // Transpose the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("The sum of the Diagonal Matrix is:%d \n", sum);
    return 0;
}