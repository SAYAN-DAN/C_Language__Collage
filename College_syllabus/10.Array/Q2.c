// Print the odd-valued elements
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d Element: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("Odd-valued Elements are: %d\n", arr[i]);
        }
    }
    printf("\n");
    return 0;
}