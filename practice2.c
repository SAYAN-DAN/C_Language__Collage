#include <stdio.h>

int calculateStringSze()
{
    // Array of strings (each string is a char pointer)
    char *arr[] = {"Hello", "World", "C", "Programming"};
    printf("%d\n", sizeof(arr));
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", size);

    printf("Elements of the array of pointers:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", arr[i]);
    }
}

int calculateArraySize()
{
    int arr[] = {10, 20, 30, 40, 50};
    printf("%d", sizeof(arr));
}
int main()
{
    // calculateStringSze();
    calculateArraySize();
    return 0;
}
