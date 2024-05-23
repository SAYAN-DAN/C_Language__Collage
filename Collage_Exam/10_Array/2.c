// WAP to perform following actions on an array entered by the user:
// ii) Print the odd-valued elements
#include<stdio.h>
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d  " , arr[i]);
        }        
    }
    return 0;
}