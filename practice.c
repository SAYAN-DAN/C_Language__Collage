
#include<stdio.h>
int findfibo(int n) {
    int x;
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    x = (findfibo(n-2) + findfibo(n-1));
    return x;    
}
int main() {
 int i,n;
 printf("Enter the number you want to print: ");
 scanf("%d", &n);
 for ( i = 0; i < n; i++)
 {
    printf("The series = %d\n", findfibo(i));
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
