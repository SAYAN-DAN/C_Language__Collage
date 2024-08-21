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
