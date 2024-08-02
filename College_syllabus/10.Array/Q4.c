// Print the maximum and minimum element of array

#include<stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d Element: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int maxvalue = arr[0];
    int minvalue = arr[0];
    for ( i = 0; i < n-1; i++)
    {
        if (maxvalue < arr[i])
        {
            maxvalue = arr[i];
        }
        if (minvalue > arr[i])
        {
            minvalue = arr[i];
        }       
    }
    printf("The maximum value is:%d", maxvalue);
    printf("The minvalue value is:%d", minvalue);
    return 0;    
}