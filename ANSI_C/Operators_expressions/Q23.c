// what would be the value of b ...
#include <stdio.h>
int main(){
    int a, b;
    a = 5;
    //   b = a++ + ++a;  // It's gives us 12
    //   b  = ++a + a++; // It's gives us 13
    //   b  = ++a + ++a;  // It's gives us 14
    //   b  = a++ + a++;  // It's gives us 11
    printf("The value of b is: %d", b);
    return 0;
}