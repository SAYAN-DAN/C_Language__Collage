#include <stdio.h>
int main()
{
    int n, m, b = m = n = 8;
    char wer[80];
    sprintf(wer, "%d%d%d", m, n, b);
    puts(wer);
}