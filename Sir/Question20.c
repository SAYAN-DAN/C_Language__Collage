// Write a program to find the sum of the following series..
// s = 1^1+2^2+3^3+.......
#include<stdio.h>
#include<math.h>
int main(){
    int n,sum = 0;
    printf("Enter the numbere:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        sum = sum+pow(i,i);
    }
    printf("The required number is %d",sum);
    return 0;    
}