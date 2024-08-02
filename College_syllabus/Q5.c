// Write a function that checks whether a given string is Palindrome or not. Use this function to find
// whether the string entered by user is Palindrome or not

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    int first = 0, last , flag = 1;
    char str[100];
    printf("Enter the string: ");
    gets(str);
    last = strlen(str) - 1;
    while (first <= last)
    {
        if ( str[first] != str[last])
        { 
            flag = 0;
            break;  
        }
        first++;
        last--;        
    }
    if (flag == 1)
    {
        printf("This is a palindrome");
    }
    else
    {        
        printf("This is not a palindrome");
    }
    
    return 0;    
}