
#include<stdio.h>
int main( ) {
    int a = 3;
    int b = ++a + a++ + --a;  // 4+4+4 = 12;
    printf("%d" , b);
}