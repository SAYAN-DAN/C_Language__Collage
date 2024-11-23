
#include <stdio.h>
int main()
{
    int charge = 0;
    int unit;
    printf("Enter the Unit: ");
    scanf("%d", &unit);
    if (unit <= 200)
    {
        charge = 5 * unit;
    }
    else if (unit <= 400)
    {
        charge = 6 * unit;
    }
    else if (unit <= 600)
    {
        charge = 7 * unit;
    }
    else
    {
        charge = 10 * unit;
    }

    printf("The Charge is %d", charge);
}