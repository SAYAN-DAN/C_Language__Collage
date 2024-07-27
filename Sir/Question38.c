// Write a program to find the largest from matrix...

#include<stdio.h>
int main() {
    int arr[3][3], i,j,max;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter arr[%d] [%d]:", i,j);
            scanf("%d", &arr[i][j]);
        }        
    }
    printf("\n The matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }        
    }
    max = arr[0][0];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if ( arr[i][j] > max)
            {
                max = arr[i][j];
            }            
        }
    }
    printf("The max term of x is %d", max);    
    return 0;    
}