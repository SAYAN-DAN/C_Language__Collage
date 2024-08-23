#include<stdio.h>
int main() {
    int a, *b = &a , **c = &b;
    a = 4;
    **c = 5;
    b = (int *)**c;
    printf("%d" , b);
}