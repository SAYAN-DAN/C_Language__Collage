#include<stdio.h>
#include<string.h>
int main() {
    char x[10], *ptr = x;
    scanf("%s" , x);
    change(&x[4]);
}
change(char a[]){
    puts(a);
}
