#include<stdio.h>
int main() {
    int x,y;
    x =5;
    y= x++ + ++x + x++;  // 5 + 7 + 7 = 19
    printf("%d\n" , x);
    printf("%d\n" , y);
}

