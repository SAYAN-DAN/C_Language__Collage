// Print the maximum and minimum element of array

#include<stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int maxvalue = arr[0];
    int minvalue = arr[0];
    
    for (i = 1; i < n; i++) {  // Start from i = 1 since arr[0] is already assigned to maxvalue and minvalue
        if (maxvalue < arr[i]) {
            maxvalue = arr[i];
        }
        if (minvalue > arr[i]) {
            minvalue = arr[i];
        }       
    }
    
    printf("The maximum value is: %d\n", maxvalue);
    printf("The minimum value is: %d\n", minvalue);
    
    return 0;    
}




