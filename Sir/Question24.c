// Write a program to check wheather a number is perfect or not
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (n == sum)
    {
        printf("The number is perfect");
    }
    else
    {
        printf("The number is not perfect");
    }
    return 0;
}