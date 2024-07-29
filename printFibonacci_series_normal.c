#include<stdio.h>
int main() {
    int n,fibo;
    printf("Enter the number:");
    scanf("%d", &n);
    int a = 0, b = 1;
    printf("%d\n%d\n", a,b);
    for (int i = 2; i <n; i++)
    {
        fibo = a+b;
        printf("%d\n" , fibo);
        a = b;
        b= fibo;
    }
    return 0;    
}