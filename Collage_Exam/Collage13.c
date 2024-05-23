// Write a program in which a function is passed address of two variables and then alter its contents.

#include<stdio.h>
 void swap(int *a , int *b) {
      *a = 20;
      *b=30;
      return;
 }


int main() {
    int num1,num2;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1,&num2);
    printf("Before the alter the value the number is %d %d\n", num1,num2);
    swap(&num1 , &num2);
    printf("After the alter the value of the number is %d %d", num1,num2);
    return 0;
}