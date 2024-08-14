
#include<stdio.h>
#include<conio.h>
int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d" , &b);
    printf("The value of a before swaping: %d\n", a);
    printf("The value of b before swaping: %d\n", b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a after swaping: %d\n", a);
    printf("The value of b after swaping: %d\n", b);
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
