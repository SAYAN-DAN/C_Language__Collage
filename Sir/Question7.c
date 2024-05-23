// Write a program to test weather a number is even or odd.
#include<stdio.h>
#include<conio.h>
int main() {
    int num;
    printf("Enter the value of a: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");        
    }
    return 0;
    
} 