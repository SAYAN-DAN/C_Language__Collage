// Write a program to find the largest amount between two number.
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d" , &b);
    if (a > b)
    {
        printf("The larger number is: %d" , a);
    }
    else
    {
        printf("The larger number is: %d" ,b);
        
    }
    
    return 0;
}