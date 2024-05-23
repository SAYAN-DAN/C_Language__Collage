
#include<stdio.h>
int main() {
    int a = !(1 && !(0||1));
    printf("%d", a);
}