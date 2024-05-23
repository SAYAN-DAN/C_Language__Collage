
// WAP for swapping two variable value without using a third variable...
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a: "); // a=4
    scanf("%d", &a);   // b = 3
    printf("Enter b: ");
    scanf("%d", &b);
    a = a+b;  // a= 7;
    b = a-b;  // b = 7- 3 = 4
    a = a - b;  // a = 7-4 =3
    printf("The swapping value of a:%d\n", a);
    printf("The swapping value of b:%d\n", b);
     return 0;
}