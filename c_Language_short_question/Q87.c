#include<stdio.h>
int main() {
    void *voidptr ;
    char *charptr;
    // voidptr = charptr;
    // *voidptr = charptr;
    // charptr = voidptr;
    *charptr = voidptr;
}