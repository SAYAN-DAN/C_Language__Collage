
#include<stdio.h>
int main() {
      int n,remainder,reverse=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
         reverse = reverse * 10 + remainder;
         n = n / 10;
    }
    printf("The reverse of the digit is:%d ", reverse);
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
