#include<stdio.h>
 int main() {
    static char a[3][4] = {"abcd", "mnop", "fghi"};
    putchar(**a);
}