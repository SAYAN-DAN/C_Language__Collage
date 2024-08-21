#include<stdio.h>
int main() 
{
    inc(); inc(); inc();
}
inc()
{
    static int x;
    printf("%d" , ++x);
}

// dont understaand what the actual code it is ?