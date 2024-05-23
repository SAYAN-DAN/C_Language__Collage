// Write a program to find the sum of the following series..
// 1/2+3/4+5/6+7/8+9/10........99/100;
#include<stdio.h>
int main(){
    float i,j,sum = 0;
    for ( i = 1,j =2; i <= 99 && j <= 100; i+=2,j+=2){
        sum = sum+i/j;
    }
    printf("The sum is: %f",sum);
    return 0;    
}