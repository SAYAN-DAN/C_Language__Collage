//  WAP to compute the sum of the first n terms of the following series S = 1+1/2+1/3+1/4+……

// #include <stdio.h>

// int main() {
//     int n;
//     float sum = 0.0;

//     // Input the number of terms from the user
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     // Calculate the sum of the series
//     for (int i = 1; i <= n; ++i) {
//         sum = sum + 1.0 / i; // Add the reciprocal of each term to the sum
//     }

//     // Print the sum
//     printf("Sum of the series up to %d terms: %.2f\n", n, sum);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter the size of the square: ");
//     scanf("%d", &n);

    
//     for (int i = 0; i < n; i++) {
//         printf("*");
//     }
//     printf("\n");

    
//     for (int i = 1; i < n - 1; i++) {
//         printf("*");
//         for (int j = 1; j < n - 1; j++) {
//             printf("");
//         }
//         printf("*\n");
//     }

    
//     if (n > 1) {
//         for (int i = 0; i < n; i++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h> 
 int main() 
 { 
 printf("C programming %s", "Class by\n%s Sanfoundry", "WOW"); 
 }