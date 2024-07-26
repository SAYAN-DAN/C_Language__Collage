
// WAP to design a simple desktop program while using switch case....
#include<stdio.h>
int main() {
    int i;
    float a,b,s;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("\n press 1 for addition");
    printf("\n press 2 for substraction");
    printf("\n press 3 for multiplication");
    printf("\n press 4 for division");
    printf("\nEnter your choise:");
    scanf("%d", &i);
    switch (i){
     case 1:
        s = a+b;
        printf("The addition is:%.2f", s);
        break;
     case 2:
        s = a-b;
        printf("The substraction is:%.2f", s);
        break;
     case 3:
        s = a*b;
        printf("The multiplication is:%.2f", s);
        break;
     case 4:
        s = a/b;
        printf("The division is:%.2f", s);
        break;     
     default:
     printf("Wrong number");
        break;
     }
}