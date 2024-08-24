#include<stdio.h>
int main() {
    int i;
    for ( i = 1; i <=5; i++)
    {
        if (i == 3){
            continue;
        }        
            printf("%d",i);
    }
    return 0;    
}

// When i is 3, the if condition is true, and continue statement is executed. This causes the loop to skip the current iteration and move to the next iteration.
