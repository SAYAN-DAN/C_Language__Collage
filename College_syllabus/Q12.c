
//  Write a program that swaps two numbers using pointers

#include<stdio.h>
int swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1;
    printf("Enter the num1: ");
    scanf("%d" , &num1);
    int num2;
    printf("Enter the num2: ");
    scanf("%d" , &num2);
    printf("Before Swapping num1 = %d num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After Swapping num1 = %d num2 = %d", num1, num2);
}