// Write a program using if-else ladder...

#include<stdio.h>
#include<conio.h>
int main() {
    int marks;
    printf("Enter the marks:");
    scanf("%d", &marks);
    if (marks >= 80)
    {
        printf("You have got star");
    }
    else if (marks >= 60)
    {
        printf("You have got first divison");
    }
    else if (marks >= 50)
    {
        printf("You have got second divison");
    }
    else if (marks >= 40)
    {
        printf("You have got third divison");
    }
    else
    {
        printf("Better luck next time");
    }
    
    return 0;
}