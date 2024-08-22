#include<stdio.h>
int main() {
    static char wer[3][4] = {"bag", "let", "bud"};
    char (*ptr)[4] = wer;
    printf("%d %d", wer[1], wer[1]+1);
}