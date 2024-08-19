#include<stdio.h>
int main() {
    int x = 4, y = x, i;
    for ( i = 1; i < 4; ++i)
    {
        x += x;
    }
    printf("The output is %d", x);
    return 0;
}