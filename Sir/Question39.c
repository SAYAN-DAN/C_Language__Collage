// Write a program to find the sum of the diagonal element of a matrix

#include<stdio.h>
int main() {
    int arr[3][3],i,j,sum = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter arr [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }        
    }
    printf("\n The maxtrix is\n");
      for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }        
    }
     
     for ( i = 0; i < 3; i++)
     {
         for ( j = 0; j < 3; j++)
         {
            if ( i == j)
            {
                sum  = sum +arr[i][j];
            }            
         }         
     }
     printf("The sum = %d", sum);
     return 0;     
}