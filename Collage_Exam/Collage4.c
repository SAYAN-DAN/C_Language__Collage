//  WAP to compute the sum of the first n terms of the following series S =1-2+3-4+5…………….

#include<stdio.h>
int main() {
    int num,sum =0;
     printf("Enter the number: ");
     scanf("%d", &num);
     for (int i = 1; i <= num; i++)
     {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }        
     }
     printf("%d", sum);
     return 0;
}
