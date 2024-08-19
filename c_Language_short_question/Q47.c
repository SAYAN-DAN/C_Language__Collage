#include<stdio.h>
int main() {
  for(putchar('a') ; putchar(0); putchar('c'))
    putchar("b");
    return 0;
}