#include <stdio.h>
int main()
{
    int i, j;
    i = 6720;
    j = 4;
    while ((i % j) == 0)
    {
        i = i / j;
        j = j + 1;
    }
    printf("%d" , j);
    return 0;
}


/*
First Iteration:
i = 6720, j = 4.
Check: 6720 % 4 == 0 (True, since 6720 is divisible by 4).
i = i / j; → i = 6720 / 4 = 1680.
j = j + 1; → j = 4 + 1 = 5.


Second Iteration:
i = 1680, j = 5.
Check: 1680 % 5 == 0 (True, since 1680 is divisible by 5).
i = i / j; → i = 1680 / 5 = 336.
j = j + 1; → j = 5 + 1 = 6.


Third Iteration:
i = 336, j = 6.
Check: 336 % 6 == 0 (True, since 336 is divisible by 6).
i = i / j; → i = 336 / 6 = 56.
j = j + 1; → j = 6 + 1 = 7.


Fourth Iteration:
i = 56, j = 7.
Check: 56 % 7 == 0 (True, since 56 is divisible by 7).
i = i / j; → i = 56 / 7 = 8.
j = j + 1; → j = 7 + 1 = 8.

Fifth Iteration:
i = 8, j = 8.
Check: 8 % 8 == 0 (True, since 8 is divisible by 8).
i = i / j; → i = 8 / 8 = 1.
j = j + 1; → j = 8 + 1 = 9.


Sixth Iteration:
i = 1, j = 9.
Check: 1 % 9 == 0 (False, since 1 is not divisible by 9).
The loop terminates because the condition (i % j) == 0 is no longer true.
*/