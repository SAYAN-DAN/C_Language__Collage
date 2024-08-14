//  Calculate and print the sum and average of the elements of array

#include<stdio.h>
int main() {
    int n, i;
    float sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d Element: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum +arr[i];
    }
   
    float average = sum / n;
    printf("The sum is %.2f" , sum);
    printf("The product is %.2f" , average);
   return 0;    
}