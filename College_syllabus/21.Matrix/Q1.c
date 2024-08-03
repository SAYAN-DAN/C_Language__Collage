// Write a prgram to find the sum of a matrix

#include <stdio.h>
int main()
{
    int rows, colm;
    int sum = 0;
    printf("Enter the number of row:");
    scanf("%d", &rows);
    printf("Enter the number of colm:");
    scanf("%d", &colm);
    int matrix[rows][colm];
    printf("Enter the elements of the matrix:\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colm; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // calculate the sum
    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; j <=colm; j++)
        {
            sum +=matrix[i][j];
        }      
    }
    printf("The sum of the matriix is: %d", sum);
    return 0;
    
}