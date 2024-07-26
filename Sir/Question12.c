
// Write a program that reades the power consumed and prints the amount  to be paid by the cusstomer...
#include<stdio.h>
int main() {
    int unit,charge;
    printf("Enter the unit: ");
    scanf("%d", &unit);
    if (unit <= 200)
    {
        charge = unit * 5;
    }
    else if ( unit <= 400)
    {
        charge = unit * 6;        
    }
    else if ( unit <= 600)
    {
        charge = unit * 7;        
    }
    else
    {        
        charge = unit * 10;        
    }
    printf("The required charge is :%d", charge);
    return 0;
    
}