
#include<stdio.h>
 void swap(int *a , int *b) {
      int temp = *a;
      *a = *b;
      *b = temp;
      return;
 }


int main() {
    int num1,num2;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1,&num2);
    printf("Before the swapping the number is %d %d\n", num1,num2);
    swap(&num1 , &num2);
    printf("After the swapping the number is %d %d", num1,num2);
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
