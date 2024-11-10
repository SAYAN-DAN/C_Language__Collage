#include <stdio.h>
int main()
{
    int arr[3][3], trans[3][3], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Original matrix of arr[%d][%d] is: ", i, j);
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Transpose of  a matrix---
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            trans[j][i] = arr[i][j];
        }
        printf("\n");
    }

    printf("The Transposed matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}