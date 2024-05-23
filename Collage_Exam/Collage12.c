//  Write a program that swaps two numbers using pointers.
#include<stdio.h>
 void swap(int *a , int *b) {
      int temp = *a;
      *a = *b;
      *b = temp;
      return;
 }


int main() {
    int num1,num2;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1,&num2);
    printf("Before the swapping the number is %d %d\n", num1,num2);
    swap(&num1 , &num2);
    printf("After the swapping the number is %d %d", num1,num2);
    return 0;
}