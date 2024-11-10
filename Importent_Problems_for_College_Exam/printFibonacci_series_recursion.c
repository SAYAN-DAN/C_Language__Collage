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