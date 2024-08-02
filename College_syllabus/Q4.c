// WAP to compute the sum of the first n terms of the following series S =1-2+3-4+5…………….
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
     if ( i % 2 == 0)
     {
        sum -= i;
     }
     if ( i % 2 != 0)
     {
        sum += i;
     }     
    }
     printf("The sum of the first %d terms is: %d\n", n, sum);    
    return 0;
}
