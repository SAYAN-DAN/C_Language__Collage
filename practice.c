#include <stdio.h>
int FindGCd(int a, int b);
int main()
{
    int n1;
    printf("Enter the number1: ");
    scanf("%d", &n1);
    int n2;
    printf("Enter the number1: ");
    scanf("%d", &n2);
    int gcd = FindGCd(n1, n2);
    printf("The GCD value of %d and %d is %d", n1, n2, gcd);
}
int FindGCd(int a, int b)
{
    if (b != 0)
    {
        return FindGCd(b, a % b);
    }
    else
    {
        return a;
    }
}

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// #include<ctype.h>

// void main()
// {
//     int i, l;
//     char a[50];
//     clrscr();
//     printf("Enter a String:\n");
//     gets(a);
//     l = strlen(a);
//     for(i = 0; i < l; i++)
//     {
//         if(a[i] >= '0' && a[i] <= '9')
//             printf("0");
//         else if(a[i] >= 'A' && a[i] <= 'Z')
//             printf("%c", tolower(a[i]));
//         else if(a[i] >= 'a' && a[i] <= 'z') // Corrected this line
//             printf("%c", toupper(a[i]));
//         else
//             printf("*");
//     }
//     getch();
// }
