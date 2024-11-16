// Print Fibonacci series using Recursion...
#include <stdio.h>
int findfibo(int n)
{
    int x;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return (findfibo(n - 2) + findfibo(n - 1));
}
int main()
{
    int i, form;
    printf("Enter the form you want to print: ");
    scanf("%d", &form);
    for (i = 0; i < form; i++)
    {
        printf("The series = %d\n", findfibo(i));
    }
    return 0;
}