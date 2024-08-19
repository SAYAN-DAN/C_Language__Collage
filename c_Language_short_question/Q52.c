#include<stdio.h>
int main() {
    int x[5][5], i,j;
    for ( i = 0; i < 5; ++i)
    {
        for ( j = 0; j < 5; j++)
        {
            x[i][j] = x[j][i];
        }        
    printf("%d\n", x[i][j]);
    }
    return 0;    
}
