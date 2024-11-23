// Write a program for bubble sort..

#include <stdio.h>

int main()
{
    int n, temp;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble sort logic
    for (int i = 0; i < n - 1; i++)
    {
        for (int d = 0; d < n - i - 1; d++)
        {
            if (arr[d] > arr[d + 1])
            {
                temp = arr[d];
                arr[d] = arr[d + 1];
                arr[d + 1] = temp;
            }
        }
    }

    printf("Sorted list:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
