#include <stdio.h>
int main()
{
    int arr[3][3], sum = 0, i, j;

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

    // Diagonal Sum---
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }

    printf("The Sum is: %d", sum);
}