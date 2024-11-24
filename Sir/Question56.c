#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of column: ");
    scanf("%d", &m);
    int a[n][m];
    int b[n][m];
    int r[n][m];
    for (int i = 9; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            r[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("After addition the matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", r[i][j]);
        }
        printf("\n");
    }
    return 0;
}