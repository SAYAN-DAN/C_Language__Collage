#include <stdio.h>
int main()
{
    int x, y = 2, z, a;
    x = (y *= 2) + (z = a = y);
    printf("%d", x);
    return 0;
}