#include <stdio.h>
// int main(){
//     int n,i;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for ( i = 2; i <= n-1; i++){
//         if (n % i ==0){
//             printf("This is not a prime number");
//             break;
//         }
//     }
//     if ( i == n){
//         printf("This is a prime number");
//     }
//     return 0;
// }

// int main() {
//   int a=100;
//   int *ptr = &a;
//   int *ptr2 = ptr + 2;
//   printf("%d", (ptr2-ptr));
// }

int main()
{
    // Null Pointer
    int *ptr = NULL;
    printf("The value of ptr is :%d\n", ptr);
    printf("The value of ptr is :%d", *ptr);
    return 0;
}