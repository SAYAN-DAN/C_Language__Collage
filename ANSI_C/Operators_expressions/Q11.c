

#include<stdio.h>
int main() {
    int a,b,c;
    a = 5;
    b = 10;
    c = -5;
    int one = (a > b && a>c); 
    // printf("%d" , one);
    int two = (a < b && a>c); 
    // printf("%d" , two);
    int three = (a==c || b > a);
    // printf("%d" , three);
    int four = b > 15 && c < 0 || a >0;
    // printf("%d" , four);
    int five = (a/2.0 == 0.0 && b/2.0 != 0.0) || c < 0.0;
    // printf("%d" , five);
}