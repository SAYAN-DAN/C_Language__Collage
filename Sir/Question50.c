
#include <stdio.h>
int func1(int u, int v)
{
    u = 0;
    v = 0;
    printf("\n Within func1: u = %d v = %d", u, v);
}
int func2(int *pu, int *pv)
{
    *pu = 0;
    *pv = 0;
    printf("\n Within func2: *pu = %d *pv = %d", *pu, *pv);
}

int main()
{
    int u = 1, v = 1;
    printf("\n Before calling func1: u = %d v = %d", u, v);
    func1(u, v);
    printf("\nAfter calling func1: u = %d v = %d", u, v);
    printf("\n Before calling func2: u = %d v = %d", u, v);
    func2(&u, &v);
    printf("\nAfter calling func2: u = %d v = %d", u, v);
}