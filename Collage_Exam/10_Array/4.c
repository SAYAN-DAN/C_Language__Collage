// WAP to perform following actions on an array entered by the user:
// iv) Print the maximum and minimum element of array

//MAX ELEMENT-----
#include<stdio.h>
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int maxarray = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (maxarray < arr[i])
        {
            maxarray = arr[i];
        }        
    }
    printf("The maximum value of array is: %d", maxarray);
    return 0;
}

//MIN ELEMENT----

#include<stdio.h>
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int maxarray = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (maxarray > arr[i])
        {
            maxarray = arr[i];
        }        
    }
    printf("The maximum value of array is: %d", maxarray);
    return 0;
}
