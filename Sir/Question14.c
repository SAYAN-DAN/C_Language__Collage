
// Write a program to find the factorial of a given number.....
#include<stdio.h>
int main() {
    int fact=1,i,n;
    printf("Enter the n: ");
    scanf("%d", &n);
    for ( i = 1; i <=n ; i++){
        fact = fact*i;
    }
    printf("The required fact is: %d", fact);
    return 0;    
}