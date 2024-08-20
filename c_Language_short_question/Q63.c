#include <stdio.h>
main()
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