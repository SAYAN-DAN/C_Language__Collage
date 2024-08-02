
//  Print the array in reverse order

#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of element: ");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the %d element: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // reverse the array
    printf("The reverse number is:\n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d\n" , arr[i]);
    }
    return 0;    
}