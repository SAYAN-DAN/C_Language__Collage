#include<stdio.h>
int main() {
    // int a=10;
    // int *ptr = &a;
    // printf("%d\n", ptr);
    // ptr+2;
    // printf("%d\n", ptr);

    int *ptr2;
    int *ptr1=ptr2+2;
    printf("%d", ptr1-ptr2);
}