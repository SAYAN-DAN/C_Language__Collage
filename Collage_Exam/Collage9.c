// WAP to print a triangle of stars as follows (take number of lines from user)

#include<stdio.h>
int main() {
    int n;
    printf("Enter the lines: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");        
    }
    return 0;
}