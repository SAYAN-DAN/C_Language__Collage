
//  Calculate and print the sum and average of the elements of array
#include<stdio.h>
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    for (int i = 0; i < 7; i++)
    {
       sum = sum + arr[i];
    }
        // Calculate the average
    float average = (float)sum / n;

    // Print the average
    printf("Average of the elements: %.2f\n", average);
    printf("The sum of the elements of array is m %d", sum);
    return 0;
}