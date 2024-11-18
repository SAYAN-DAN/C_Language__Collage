#include <stdio.h>

long int power(int num, int pow);

void main()
{
    int pow, num;
    long int res;

    printf("\n Enter a number: \n");
    scanf("%d", &num);
    printf("\n Enter pow: ");
    scanf("%d", &pow);
    res = power(num, pow);
    printf("\n %d to the power %d is : %d", num, pow, res);
}

int i = 1;
long int sum = 1;
long int power(int num, int pow)
{
    if (i <= pow)
    {
        sum = sum * num;
        power(num, pow - 1);
    }
    else
    {
        return sum;
    }
}