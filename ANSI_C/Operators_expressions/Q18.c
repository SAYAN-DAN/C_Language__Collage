// Find the output of the following program.. and Explain it ...

#include<stdio.h>
int main() {
    int i;
    for ( i = 0; i < 3; ++i)
    {
       printf("%d\n", (i%2 ==0)?i:i+2);
    }
    
}