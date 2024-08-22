#include<stdio.h>
int main() {
    static char wer[3][4] = {"bag", "let", "bud"};
    char (*ptr)[4] = wer;
    // putchar(*(*(ptr+1) + 2));
    // putchar(*(wer[1] + 2));
    // putchar(* (ptr + 1) + 2);
}