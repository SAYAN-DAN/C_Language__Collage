#include<stdio.h>
int main() {
    static char wer[][5] = {"harmot", "merli", "axari"};
    printf("%p %p %p", wer, wer[0], &wer[0][0]); 
}

// This gives us error