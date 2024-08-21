#include <stdio.h>
int main()
{
    putchar('M');
    first();
    putchar('m');
}
first()
{
    putchar('a');
    second();
    printf("%c", 'a');
}
second()
{
    putchar('d');
}